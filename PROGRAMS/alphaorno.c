#include<stdio.h>
int main(){


char digiton;
printf("Enter digit or character -");
scanf("%c",&digiton);

printf("Input value %c , %d\n",digiton,digiton);

if((digiton >= 'a' && digiton <= 'z') || (digiton >= 'A' && digiton <= 'Z'))
{
    printf("Given char %c is an alphabet",digiton);
}
else{
    printf("Its not an alphabet");
}


}
