#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define maxlength 100

int main() {
    int i, n;
    char **names;
    char buffer[maxlength];
    int length;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    //allocate n number of names
    printf("Size of char pointer %d", sizeof(char *));
    names=(char **) malloc(n * sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }   

    for (i = 0; i < n; i++) 
    {
        printf("Enter name :\n");
        scanf("%s",buffer);
        length = strlen(buffer);
        names[i] = (char *)malloc((length + 1) * sizeof(char));

        if (names[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }  

        strcpy(names[i],buffer);
    }

    for (i = 0; i < n; i++) 
    {
        printf("%s \n ", names[i]);
        free(names[i]);
    }
    free(names);


}

    