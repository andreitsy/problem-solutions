#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 10


int main() {
    int n = 0, tmp;
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = 0; i < MAX_SIZE; i++) 
    {
        scanf("%i", &tmp);
        if ((a <= tmp) && (tmp <= b)) {
            n += tmp;
        }
    }
    printf("%i", n);
}
