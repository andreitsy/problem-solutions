#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if (a < b) {
        if (b < c) {
            printf("YES");
        } else {
            printf("NO"); 
        }
    } else {
        printf("NO"); 
    }
}
