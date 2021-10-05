#include <stdio.h>

int main() {
    int n, t;
    int max_num = -1;
    int min_num = 10;

    scanf("%i", &n);

    while(n > 0) {
        t = n % 10;
        if (max_num < t) {
            max_num = t;
        }
        if (min_num > t) {
            min_num = t;
        }
        n /= 10;
    }
    printf("%i %i", min_num, max_num);

}
