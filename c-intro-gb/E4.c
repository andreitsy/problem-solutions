#include <stdio.h>
#define SIZE 10

int find_sum_max(int * a, int size) {
    int max_val_1 = a[0] > a[1] ? a[0] : a[1];
    int max_val_2 = a[0] > a[1] ? a[1] : a[0];

    for(int i = 2; i < size; ++i) {
        if (a[i] > max_val_2) {
            if (a[i] > max_val_1) {
                max_val_2 = max_val_1;
                max_val_1 = a[i];
            } else {
                max_val_2 = a[i];
            }
        }
    }
    return max_val_1 + max_val_2;
}


int main() {
    int arr[SIZE] = {0};
    int idx_max, max, idx_min, min;

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    printf("%i", find_sum_max(arr, SIZE));
}
