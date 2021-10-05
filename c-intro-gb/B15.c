#include <stdio.h>

int main() {
    int n, count = 0;
    
    do {
        scanf("%i", &n);
        if (n != 0 && (n % 2) == 0) {
            count++;
        }
    } while(n != 0);

    printf("%i", count);

}
