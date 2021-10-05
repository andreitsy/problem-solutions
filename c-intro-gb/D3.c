#include <stdio.h>

int reverse(int n) {
    printf("%i ", n % 10);
    if (n / 10 > 0) {
        return reverse(n / 10);
    } else {
        return 0;
    }
}

int main() {
    int m;
    scanf("%i", &m);
    reverse(m);
}
