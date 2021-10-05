#include <stdio.h>
#define MAX_SIZE 1000000

int arr[MAX_SIZE];

void print_simple(int n) {
    int p = 2, k = 1, pow_k = 0;

    for(int i = 0; i <= n; ++i) {
        arr[i] = i;
    }

    for(int i = 2; i <= n; ++i) {
        if (arr[i] != -1) {
           p = i;
           k = 2;
           while(k*p <= n) {
               arr[k*p] = -1;
               k += 1;
           }
        }
    }

    for(int i=2; i <= n; ++i) {
        if ((arr[i] != -1) && (n % i == 0)) {
            pow_k = 1;
            k = i;
            while ((k <= n) && (n % k == 0)) {
                k *= i;
                ++pow_k;
            }
            for(int j = 0; j < pow_k - 1; ++j) {
                printf("%i ", i);
            }
        }
    } 
}

int main() {
    int n;
    scanf("%i", &n);
    print_simple(n);
}
