#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100
#define MAX_NAMES 1000

void readNamesFromFile(const char *filename, char names[][MAX_NAME_LEN], int *count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    *count = 0;
    while (fgets(names[*count], MAX_NAME_LEN, file) != NULL) {
        // Remove the newline character
        names[*count][strcspn(names[*count], "\n")] = '\0';
        (*count)++;
    }

    fclose(file);
}

void writeNamesToFile(const char *filename, char names[][MAX_NAME_LEN], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s\n", names[i]);
    }

    fclose(file);
}

int compareNames(const void *a, const void *b) {
    return strcmp((const char *)b, (const char *)a);
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LEN];
    int count;

    readNamesFromFile("input.txt", names, &count);

    qsort(names, count, MAX_NAME_LEN, compareNames);

    writeNamesToFile("sorted_output.txt", names, count);

    printf("Names sorted and written to sorted_output.txt\n");

    return 0;
}


