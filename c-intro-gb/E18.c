#include <stdio.h>

int count_num_multiples(int n, int k) {
    int num = 0;
    for(int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            num++;
        }
    }
    return num;
}

int main() {
    int n;
    scanf("%i", &n);

    for(int i = 2; i < 10; ++i) {
        printf("%i %i\n", i, count_num_multiples(n, i));
    }


}
