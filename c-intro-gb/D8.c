#include <stdio.h>

void print_n(int a, int b) {
    printf("%i ", a);
    if (a < b) 
    {
        print_n(a + 1, b);
    } else if (a > b) {
        print_n(a - 1, b);
    }
}

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    print_n(a, b);
}
