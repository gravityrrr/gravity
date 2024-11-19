#include<stdio.h>

int greater(int num1, int num2)
{
    int n=0;
    if (num1>num2)
    {
       n = 1;
    }
    else if( num1 == num2)
    {
        n =  2;
    }
    else
    {
        n =  3;
    }
    return n;
}
int main(){
    int num1;
    int num2;
    
       
    printf("Enter 1st number -- ");
    scanf("%d",&num1);
    printf("Enter 2nd number -- ");
    scanf("%d",&num2);
    
    int result = greater(num1,num2);

    switch(result)
    {
        case 1:  printf("%d is grater",num1);
                break;
        case 2: printf("%d is equal",num1);
                break;
        case 3: printf("%d is Small",num1);
                break;
        default:
                printf("Invalid case");
    }

}