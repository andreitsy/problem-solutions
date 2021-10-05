#include <stdio.h>
#define SIZE 12


int main() {
    double mean = 0, tmp;
    for(int i = 0; i < SIZE; ++i) {
        scanf("%lf", &tmp);
        mean += tmp;
    }
    printf("%.2lf", mean / SIZE);

}
