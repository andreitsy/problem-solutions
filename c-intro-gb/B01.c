#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    for(int i = 1; i <= a; ++i) {
        printf("%i %i %i\n", i, i*i, i*i*i);
    }

}
