#include <stdio.h>

void print_seq_m(int n) {
    int k = 0, val = 0;
    for (int i = 1; i <= n; ++i) {
        if (k <= 0) {
            val++;
            k = val;
        }
        k--;
        printf("%i ", val);

    }
}

int main() {
    int n;
    scanf("%i", &n);
    print_seq_m(n);
}
