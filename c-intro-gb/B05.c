#include <stdio.h>

int main() {
    int x, sum = 0;
    scanf("%i", &x);
    while(x > 0) {
        sum += x % 10;
        x /= 10;
    }
    printf("%i", sum);
}
