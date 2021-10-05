#include <stdio.h>

int sum_rec(int sum, int n) {
    if (n > 0) {
        return sum_rec(sum + n, n - 1);
    } else {
        return sum;
    }
}


int main() {
    int n;
    scanf("%i", &n);
    printf("%i", sum_rec(0, n));
}
