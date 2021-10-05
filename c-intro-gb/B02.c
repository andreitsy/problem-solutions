#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    for(int i = a; i <= b; ++i) {
        printf("%i ", i*i);
    }

}
