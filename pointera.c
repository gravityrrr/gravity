#include<stdio.h>
int main()
{
    int a=0x12345678;
    char  *b;
    b = (char *)&a;
    printf("%x   %x  %x\n",a,*b,*(b+1));
    short c[20];
    short *d;
    int i;
    for(d=c,i=0; d < (c+20); d++,i++)
    {
        *d=i;
        printf("%d \n",*d);
    }

    for(i=0 ; i< 20; i++)
    {
        printf("%d\n",c[i]);
    }

    
}