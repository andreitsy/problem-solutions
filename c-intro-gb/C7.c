#include <stdio.h>



long long int convert(int n, int base) {
    char arr[100] = {'\0'};

    long long rez = 0;
    int pow_base = 0, pow_10 = 0;
    int x;
    while(n > base) {
        pow_10 = 1;
        pow_base = 1;
        x = n;
        do {
          x /= base;
          pow_10 *= 10;
          pow_base *= base;  
        } while(x/base > 0);
        rez += pow_10 * (n / pow_base);
        n %= pow_base;
    }
    rez += n;
    return rez;
}

int main() {
    int n, p;
    scanf("%i %i", &n, &p);
    printf("%lli", convert(n, p));
}
