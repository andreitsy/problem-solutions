#include <stdio.h>

int main() {
    int n, a = 0, b = 1, tmp;
    scanf("%i", &n);
    while(--n > 0) {
        printf("%i ", b);
        tmp = a;
        a = b;
        b = a + tmp;
    }
    printf("%i", b);

}
