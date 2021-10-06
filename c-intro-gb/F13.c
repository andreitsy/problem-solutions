#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 10


int main() {
    int n = 0, tmp;
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);

    for(int i = 0; i < MAX_SIZE; i++) 
    {
        scanf("%i", &tmp);
        if ((a <= tmp) && (tmp <= b)) {
            n++;
        }
    }
    printf("%i", n);
}
