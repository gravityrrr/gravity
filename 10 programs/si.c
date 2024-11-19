#include<stdio.h>
int main(){
float p,t,r;
printf("enter the value of p");
scanf("%f",&p);
printf("enter the value of t");
scanf ("%f", &t);
printf("enter the value of r");
scanf ("%f", &r);

float answer=(p*t*r)/100;
printf("simple interest is --%.2f",answer);
return 0;

}