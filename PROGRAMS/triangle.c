#include <stdio.h>

int main(){
    int line= 0  ;
    int i =0;
    int stars;
    int nolines;
    printf("how many lines u want - ");
    scanf("%D",&line);
    
    int rows = (2 *line) - 1;
    int position = 1;
    //(rows+1)/2;

    for(nolines=rows; nolines > 0 ;nolines=nolines-2)
    {    
        for(i=1;i<position;i++)
        {
            printf(" ");
        }

        for(stars=1;stars<=nolines;stars++)
        {
                printf("*");
        }
        printf("\n");
        position = position +1;
    }

}