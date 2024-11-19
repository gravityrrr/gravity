#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define line_length 1000
#define length_field 300

typedef struct {
    char id[length_field];
    char name[length_field];
    char phone[length_field];
    char parent[length_field];
    char dob[length_field];
    char date_of_joining[length_field];
    char address[length_field];
} Record;


void extract_record(char *str,Record *st) {
    const char delimiter[2] = ",";
    char *token;
   

    /* get the first token */
    token = strtok(str, delimiter);

    /* walk through other tokens */
    int count=0;
    while(token != NULL) {

        //id,name,ph,parent,dob,doj,Address
        switch(count)
        {
            case 0: strcpy(st->id,token); break;
            case 1: strcpy(st->name,token); break;
            case 2: strcpy(st->phone,token); break; 
            case 3: strcpy(st->parent,token); break;
            case 4: strcpy(st->dob,token); break;
            case 5: strcpy(st->date_of_joining,token); break;
            case 6: strcpy(st->address,token); break;             
        }
      token = strtok(NULL, delimiter);
      count++;
    }

 }



void print_record(Record *record) {
    printf("ID: %s\n", record->id);
    printf("Name: %s\n", record->name);
    printf("Phone: %s\n", record->phone);
    printf("Parent: %s\n", record->parent);
    printf("DOB: %s\n", record->dob);
    printf("Date of Joining: %s\n", record->date_of_joining);
    printf("Address: %s\n", record->address);
    printf("\n");
}

int main() {
    FILE *file = fopen("C:\\Users\\ASUS\\Documents\\acti_coach.csv", "r");
    char line[line_length];
    if (!file) {
        perror("Error opening file");
        return 1;
    }
    Record record;
    while(fgets(line,line_length,file) !=NULL)
    {
     extract_record(line,&record);
     print_record(&record);
    }
    fclose(file);
    
}
