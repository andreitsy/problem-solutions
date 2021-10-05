#include <stdio.h>

int pow_2(int n) {
    if (n > 0) {
        return 2 * pow_2(n - 1);
    } else {
        return 1;
    }
}

void printer_func(int n, int power) {
    int p = pow_2(power); 
    printf("%i", n / p);
    if (power > 0) {
        printer_func(n % p, power-1);
    }
}

void print_num(int num) {
    int p = 0, n = num;
    while(n / 2 > 0) {
        p += 1;
        n /= 2;
    }
    printer_func(num, p);
}

int main() {
    int m;
    scanf("%i", &m);
    print_num(m);
}
