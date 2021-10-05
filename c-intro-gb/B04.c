#include <stdio.h>

int main() {
    int a, sum_digit = 0;
    scanf("%i", &a);
    while(a > 0) {
        sum_digit += 1;
        a /= 10;
    }
    if (sum_digit == 3) {
        printf("YES");
    } else {
        printf("NO");
    }
}
