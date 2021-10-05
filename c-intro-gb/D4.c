#include <stdio.h>

int pow_10(int n) {
    if (n > 0) {
        return 10 * pow_10(n - 1);
    } else {
        return 1;
    }
}

void printer_func(int n, int power) {
    int p = pow_10(power); 
    printf("%i ", n / p);
    if (power > 0) {
        printer_func(n % p, power-1);
    }
}

void print_num(int num) {
    int p = 0, n = num;
    while(n / 10 > 0) {
        p += 1;
        n /= 10;
    }
    printer_func(num, p);
}

int main() {
    int m;
    scanf("%i", &m);
    print_num(m);
}
