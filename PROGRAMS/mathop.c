#include <stdio.h>

void add1(int a,int b)
{
    int c;
    c = a+b;
    printf("Add1 %d",c);
}

int add(int a,int b)
{
    return a + b;
}

int sub(int a,int b)
{

    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}


void modify_add(int a1[2],int x)
{
    a1[0] = 100;
    a1[1] = 1000;
    x = 5;
}

int main()
{
    int c,e,d;
    int arr[2];
    int x=6;

    arr[0] = 5 ;
    arr[1] = 10;

    modify_add(arr,x);
    printf(" 0 - > %d\n 1 - > %d\n x - > %d\n",arr[0],arr[1],x);

    // c=add(4,5);
    // e=sub(4,5);
    // d=mul(5,6);
    // add1(5,7);
    //printf("Add = %d\nSub = %d\nMul = %d\n",c,e,d);

}