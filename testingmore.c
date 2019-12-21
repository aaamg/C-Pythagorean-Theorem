#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//pythagorean theorem right triangle calculator

int main(){
    double a, b, c, d;
    printf("what is the size of side a?\n");
    scanf("%lf", &a);
    printf("what is the size of side b?\n");
    scanf("%lf", &b);

    c = (a*a) + (b*b);
    d = sqrt(c);

    //printf("a = %lf, b = %lf, c = %lf, d = %lf\n", a,b,c,d); testing all numbers
    printf("side C = %lf", d); //answer
    return 0;
}

