#include <stdio.h>

int main() {
    long long int a, b, sumka = 0;
    scanf("%lli %lli", &a, &b);
    for(int i = a; i <= b; ++i) {
        sumka += i * i;
    }
        printf("%lli", sumka);
}
