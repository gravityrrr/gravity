//Sum of n natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    int i = 1;
    int sum ;
    while(i<=n)
    {
        sum = sum + i ; 
        i = i + 1;
    }

    printf("Sum of n numbers = %d  %d",sum , ((n * (n+1))/2));
}