#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 5

double mean_matrix(int a[MATRIX_SIZE][MATRIX_SIZE]) {
    int n = 0;
    double mean = 0;

    for(int i = 0; i < MATRIX_SIZE; ++i) {
        n += a[i][i];
    }
    mean = (double) n / MATRIX_SIZE;
    return mean;
}

int main() {
    int a[MATRIX_SIZE][MATRIX_SIZE];
    int n = 0;
    double mean;

    for(int i = 0; i < MATRIX_SIZE; i++) 
    {
        for(int j = 0; j < MATRIX_SIZE; ++j) {
            scanf("%i", &a[i][j]);
        }
    }
    mean = mean_matrix(a);
    for(int i = 0; i < MATRIX_SIZE; i++) 
    {
        for(int j = 0; j < MATRIX_SIZE; ++j) {
            if ((a[i][j] > 0) && (((double)a[i][j]) > mean)) {
                n++;
            }
        }
    }
    printf("%i", n);
}
