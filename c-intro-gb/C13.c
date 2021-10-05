#include <stdio.h>


float cosinus(float x) {
    double rez;
    rez = x * 3.14159265359 / 180.;
    rez = 1.0 - rez*rez*(0.5 - rez*rez*(1.0 / 24.0 - rez*rez / 720.0)); 
    return rez; 
}

int main() {
    float x;
    scanf("%f", &x);
    printf("%.3f", cosinus(x));
}
