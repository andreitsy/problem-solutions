#include <stdio.h>

void sieve_of_eratosthenes(int n) {
    int arr[n + 1];
    int p = 2, k = 1;

    for(int i = 0; i <= n; ++i) {
        arr[i] = i;
    }

    for(int i = 2; i*i <= n; ++i) {
        if (arr[i] != -1) {
           p = i*i;
           while(p <= n) {
               arr[p] = -1;
               p += i;
           }
        }
    }

    for(int i = 2; i <= n; ++i) {
        if (arr[i] != -1) {
           printf("%i ", i);
        }
    }
}

int main() {
    int n;
    scanf("%i", &n);
    sieve_of_eratosthenes(n);
}
