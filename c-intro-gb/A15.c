#include <stdio.h>

int main() {
    double x1, y1, x2, y2, k, b;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    if (x2 - x1 != 0) {
        k = (y2 - y1) / (x2 - x1);
    }        
    b = y1 - k * x1;

    printf("%.2lf %.2lf", k, b); 

}
