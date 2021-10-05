#include <stdio.h>

int main() {
    int n, count = 0;
    
    do {
        scanf("%i", &n);
        count++;
    } while(n != 0)

    printf("%i", count);

}
