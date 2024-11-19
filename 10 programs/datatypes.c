#include<stdio.h>
int main(){
    float a=2.33 ;
    int b=7;
    char c = 'abc';
    long d = 2;
    double e = 7.89697989099; //occupies 8 bytes of memory
    printf("%d %d %d %d %d ", sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
return 0;
}