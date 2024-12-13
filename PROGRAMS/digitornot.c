#include<stdio.h>
int main(){


char digiton;
printf("Enter digit or character -");
scanf("%c",&digiton);

printf("Input value %c , %d\n",digiton,digiton);

if(digiton >= '0' && digiton <= '9')
{
    printf("Given number %c is a digit",digiton);
}
else{
    printf("Its not a digit");
}


}