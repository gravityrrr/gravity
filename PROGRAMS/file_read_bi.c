#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_STUDENTS 10

typedef struct {
    char name[10];
    char address[200];
    int age;
    int class;

    char dob[10];
    char id;
} Student;

void generateRandomStudent(Student *student, int id) {
    static const char *names[] = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Hank", "Ivy", "Jack"};
    static const char *addresses[] = {
        "123 Main St", "456 Maple Ave", "789 Oak Dr", "101 Pine St", "202 Birch Ln",
        "303 Cedar Ct", "404 Elm St", "505 Walnut Ave", "606 Ash Dr", "707 Cherry St"
    };
    static const char *dobs[] = {"01/01/2010", "02/02/2011", "03/03/2012", "04/04/2013", "05/05/2014",
                                 "06/06/2015", "07/07/2016", "08/08/2017", "09/09/2018", "10/10/2019"};

    int i =0;
    for(i=0 ; i < 10 ; i++)
    {
        student->name[i] = ' ';
    }
     for(i=0 ; i < 200 ; i++)
    {
        student->address[i] = ' ';
    }   
    strcpy(student->name, names[id]);
    student->age = 5 + rand() % 10;  // Age between 5 and 14
    student->class = 1 + rand() % 10;  // Class between 1 and 10
    strcpy(student->address, addresses[id]);
    strcpy(student->dob, dobs[id]);
    student->id = id;
}

void writeStudentsToFile(const char *filename, Student students[], int count) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fwrite(students, sizeof(Student), count, file);

    fclose(file);
}

void readStudentsFromFile(const char *filename, Student students[], int *count) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    *count = fread(students, sizeof(Student), NUM_STUDENTS, file);

    fclose(file);
}

void displayStudents(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Age: %d, Class: %d, Address: %s, DOB: %s, ID: %d\n",
               students[i].name, students[i].age, students[i].class, students[i].address, students[i].dob, students[i].id);
    }
}

int main() {
    srand(time(NULL));

    Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        generateRandomStudent(&students[i], i);
    }

    const char *filename = "students.dat";
    writeStudentsToFile(filename, students, NUM_STUDENTS);

    Student readStudents[NUM_STUDENTS];
    int count;
    readStudentsFromFile(filename, readStudents, &count);

    printf("Read %d students from file:\n", count);
    displayStudents(readStudents, count);

    return 0;
}
