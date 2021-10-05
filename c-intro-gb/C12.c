#include <stdio.h>


float sinus(float x) {
    double rez;
    rez = x * 3.14159265359 / 180.;
    rez = rez*(1.0 - rez*rez*(1.0 / 6.0 - rez*rez*(1.0 / 120.0 - rez*rez / 5040.0))); 
    return rez; 
}

int main() {
    float x;
    scanf("%f", &x);
    printf("%.3f", sinus(x));
}
