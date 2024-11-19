//wap to print the roots of a given quad eq
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the coeff of the eq like a b c");
    float disc,root1,root2;
    disc=(b*b)-(4*a*c);
    if (disc=0){
        root1= (-b + sqrt(disc))/(2*a);
        root2= (-b - sqrt(disc))/(2*a);
        printf("two real and different roots are %f and %f",root1,root2);
    }
    else if (disc=0)
    {
        root1=-b/(2*a);
        root2=root1;
        printf("the two equal and real roots are %f and %f",root1,root2);
    }
else {
    float real, im;
    real = -b / (2 * a);
    im = sqrt(fabs(disc)) / (2 * a); // fabs makes disc positive
    printf("The two imaginary roots are (%f + i%f) and (%f - i%f)\n", real, im, real, im);
}

}