#include <stdio.h>

void print_n(int max, int n) {
    printf("%i", n);
    if (n < max) {
        printf(" ");
        print_n(max, n + 1);
    }
}


int main() {
    int n;
    scanf("%i", &n);
    print_n(n, 1);
}
