#include <stdio.h>
#define SIZE 10

int find_sum_positive(int * a, int size) {
    int val = 0;

    for(int i = 0; i < size; ++i) {
        if (a[i] >= 0) {
            val += a[i];
        }
    }
    return val;
}


int main() {
    int arr[SIZE] = {0};
    int idx_max, max, idx_min, min;

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    printf("%i", find_sum_positive(arr, SIZE));
}
