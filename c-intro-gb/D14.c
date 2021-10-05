#include <stdio.h>

int main() {
    int n;

    do {
        scanf("%i", &n);
        if (n % 2) {
            printf("%i ", n); 
        }

    } while (n != 0);


}
