#include<stdio.h>
#include<string.h>
#define LEN 50
void strrv(char str[LEN])
{
    int len = strlen(str);
    int i =0;
    int j = len-1;
    while(i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}


int main()

{
    char str[50]="Tomorrow is holiday"; //malayalasm
    strrv(str);
    printf(" Reversed string = %s",str);
}