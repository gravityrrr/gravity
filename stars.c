#include <stdio.h>

int main(){
    int n = 4;
    int i;
    int j;
    for (i=0;i<=n-1;i++)  //the loop will be 1st and then 2nd 
                        //it 2nd is completed
    {   
        for (j=0;j<=n;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}