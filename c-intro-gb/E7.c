#include <stdio.h>
#define SIZE 10

void inverse(int * a, int size) {
    int tmp;
    for(int i = 0, j = size - 1; i < j; ++i, --j) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}


int main() {
    int arr[SIZE] = {0};

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    inverse(arr, 5);
    inverse(&arr[5], 5);
    for(int i = 0; i < SIZE; ++i) {
        printf("%i ", arr[i]);
    }
}
