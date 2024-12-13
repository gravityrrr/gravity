#include<stdio.h>
#define LENG 10

 void multiplication(int input, int result[LENG])
 {
    int i;
    //printf("Address of input in mult %d  %d   result - %d\n",&input,result,result[0]);

    for(i=0;i<LENG;i++)
    {
     result[i] = (i+1) * input; 
    }
 }

int main(){
    int input;
    int n = 1;
    int res[LENG];

    res[0] = 100;
    //printf("Address of input in main %d  %d",&input,res);
    
    
    printf("What table do u want --\n ");
    scanf("%d",&input);
    multiplication(input,res);
    while(n<=10)
    {
      printf("%d * %d = %d \n", input ,n, res[n-1]);
      n=n+1;
    }
    return 0;   
    
}