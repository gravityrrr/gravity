#include<stdio.h>
#include<string.h>
#define LEN 50
void strrv(char str[LEN],int start ,int end)
{
    int i =start;
    int j = end-1;
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
    int start=0;
    int prev_start=0;
    while(str[start]!='\0')
    {
        start++;
        if(str[start] == ' ')
        {
        strrv(str,prev_start,start);
        prev_start=start+1;
                        
        }
    }
    strrv(str,prev_start,start);

    printf(" Reversed string = %s",str);
}