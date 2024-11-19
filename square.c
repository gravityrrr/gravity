// #include<stdio.h>

// int main(){
//     int len ;
//     printf("what is the length of the sq --");
//     scanf("%D",&len);
//     int i;
//     int space;
//     int j = 0;
//     for(i=1;i<=len;i++)
//     {
//         printf("*");
//         for (int x=0; x<=len;x++)
//         {
//         int x=0;
//         if (x==0 || x == len )
//         {
//             printf("* ");
//         }
//         else
//         {
//             printf(" ");

//         }
//         }
//         printf("\n");
//     }
    

    
    
// }

#include <stdio.h>

int main() {
    int sideLength;

    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    // Print the square border
    for (int i = 0; i < sideLength; i++) 
    {
        for (int j = 0; j < sideLength; j++) 
        {
            
             if (i == 0 || i == sideLength -1 || j == 0 || j == sideLength-1) 
             {
                printf("* ");
             } 
             else 
             {
                 printf("  "); // Print spaces inside the square
             }

        }
        printf("\n");
    }

return 0;
}