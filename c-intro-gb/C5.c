#include <stdio.h>

int sum_n(int n) {
    return n*(n+1)/2;
}

int main() {
    int n;
    scanf("%i", &n);
    printf("%i", sum_n(n));
}
