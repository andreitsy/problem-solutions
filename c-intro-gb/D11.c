#include <stdio.h>

int pow_2(int n) {
    if (n > 0) {
        return 2 * pow_2(n - 1);
    } else {
        return 1;
    }
}

void sum_2(int n, int power, int *sum) {
    int p = pow_2(power); 
    *sum += n / p;
    if (power > 0) {
        sum_2(n % p, power-1, sum);
    }
}

void compute_2(int num) {
    int p = 0, n = num, sum = 0;
    while(n / 2 > 0) {
        p += 1;
        n /= 2;
    }
    sum_2(num, p, &sum);
    printf("%i", sum);
}

int main() {
    int m;
    scanf("%i", &m);
    compute_2(m);
}
