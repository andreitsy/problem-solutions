#include <stdio.h>
#define SIZE 20

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_simple(int *a, int size) {

    for(int i = 1; i < size; ++i) {
        for (int j = size - 1; j >= i; --j) {
            if (a[j] < a[j-1]) {
                swap(a+j, a + j - 1);
            }
        }
    }
}

int main() {
    int arr[SIZE] = {0};

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    sort_simple(arr, SIZE);
    for(int i = 0; i < SIZE; ++i) {
        printf("%i ", arr[i]);
    }
}
