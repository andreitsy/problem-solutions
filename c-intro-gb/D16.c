#include <stdio.h>

int is2pow(int n) {
    return (n==1) || !((n-1) & n);
}

int main() {
    int n;
    scanf("%i", &n);

    if (is2pow(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
}
