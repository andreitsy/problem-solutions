#include <stdio.h>
#define SIZE 5


int main() {
    double mean = 0, tmp;
    for(int i = 0; i < SIZE; ++i) {
        scanf("%lf", &tmp);
        mean += tmp;
    }
    printf("%.3lf", mean / SIZE);

}
