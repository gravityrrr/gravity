#include<stdio.h>
#include <string.h>

int main()
{
    int x=0x8a;   //1000 1010
    int y =0x01;  //1
    x = x << 1;
    printf("%d ",x);
    x = x >> 1;
    printf("%d ",x);
    x = x >> 1;
    printf("%d ",x); 
    int z = x & y;
    printf("%d ",z);
     int a = x | y;
    printf("%d ",a);   
    int aa = x ^ y;
    printf("%d ",aa);   
    int vale=6;
    printf("%x",vale);
    int pos = 0;
    for(pos=0 ; vale != 0 ; pos++)
    {
        vale = vale >> 1;
    }
    
    printf("Position of most sig bit %d\n",pos);


    int powersof2 = 1;
    int i =1;
    for(i=1;i<36;i++)
    {
        int result = powersof2<<i;
        printf("%d  ---  %x\n",result,result);
    }


}







// int main()
// {
//     char arr[50]="My name is Rushil";
//     int i=0;
//     for(i=0; arr[i]!='\0';i++)
//     {
//         if(arr[i] >= 'A' && arr[i] <= 'Z')
//         {
//             arr[i] = (arr[i] - 'A') + 'a';
//         }
//         else  if(arr[i] >= 'a' && arr[i] <= 'z')
//         {
//             arr[i] = (arr[i] - 'a' )+ 'A';
//         }
        
//     }
//     printf("string = %s",arr);
    
// }