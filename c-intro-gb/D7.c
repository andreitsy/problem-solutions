#include <stdio.h>

void print_n(int n) {
    if (n > 0) 
    {
        printf("%i ", n);
        print_n(n-1);
    }
}

int main() {
    int n;
    scanf("%i", &n);
    print_n(n);
}
