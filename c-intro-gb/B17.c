#include <stdio.h>


int lucky_number(int n) {
    int sum = 0;
    int product = 1;

    while(n > 0) {
        sum += n % 10;
        product *= n % 10;
        n /= 10;
    }
    return sum == product;
}

int main() {
    int n;
    scanf("%i", &n);

    for(int i = 10; i <= n; ++i) {
        if (lucky_number(i)) {
            printf("%i ", i);
        }
    }
}
