#include <stdio.h>
int main(){
    long nc;
    nc = 0;
    while(getchar() !='0')
    {
    ++nc;
    }
    printf("%d\n", nc);
}