#include <stdio.h>
#define SIZE 20

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_array(int *a, int size) {
    for(int i = 0; i < size; ++i) {
        printf("%i ", a[i]);
    }
    printf("\n");
}

void sort_simple(int *a, int size) {
    int k, l;
    for(int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if ((a[j] % 2 == 1) || (a[j] % 2 == -1)) {
                swap(a+j, a + j + 1);
            }
        }
    }
    for(int i = 0; i < size; ++i) {
        if (a[i] % 2 != 0) {
            k = i;
            l = size - 1;
            while (k < l) {
                swap(a + k, a + l);
                k++;
                l--;
            }
            break;
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
