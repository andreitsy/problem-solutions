#include <stdio.h>
#define SIZE 10

int find_max(int a[], int size) {
    int max = a[0];
    for(int i = 1; i < size; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int sum = 0;
    int a[SIZE][SIZE] = {0};
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            scanf("%i", &a[i][j]);
        }
    }
    for(int i = 0; i < SIZE; ++i) {
        sum += find_max(a[i], SIZE);
    }
    printf("%i", sum);
    
}
