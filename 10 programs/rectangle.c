#include<stdio.h>
int main(){
    int a,b;
    printf ("enter the values of a and b");
    scanf ("%d %d", &a,&b);
    int area= a*b, perimeter= 2*(a+b);
    printf ("the area= %d, the perimeter =%d", area, perimeter);


return 0;
}