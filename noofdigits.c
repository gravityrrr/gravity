#include <stdio.h>
#include<math.h>
int main(){
    int input;
    printf("Enter a number to check the no of digits -");
    scanf("%d",&input);
    int count = 1;
    int result = input / 10;
    while(result  != 0)
    {
        result = result / 10;
        count++;
    }
    printf("Digit count %d \n",count);

    int  remainder;
    int ams_num =0;
    result = input;
    do{
        remainder= result % 10;
        int x = (float)pow(remainder,count);
        ams_num = ams_num + x;
        result = result / 10;
        printf("%d,%d,%d,%d\n",ams_num,remainder,result,x);       
      
    }while(result  != 0);
 
    if (ams_num == input)
    {
        printf("%d is Ams Numer  %d",input,ams_num);
    }
    else{
         printf("%d Not Ams Numer  %d ",input,ams_num);       
    }


    

}