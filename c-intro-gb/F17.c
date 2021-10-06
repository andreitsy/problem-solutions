#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 5


int main() {
    int a[MATRIX_SIZE][MATRIX_SIZE];
    int n = 0;

    for(int i = 0; i < MATRIX_SIZE; i++) 
    {
        for(int j = 0; j < MATRIX_SIZE; ++j) {
            scanf("%i", &a[i][j]);
        }
    }
    for(int i = 0; i < MATRIX_SIZE; ++i) {
        n += a[i][i];
    }
    printf("%i", n);
}
