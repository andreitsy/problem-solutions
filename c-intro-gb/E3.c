#include <stdio.h>
#define SIZE 10

void find_min(int * a, int size, int * idx, int * val);
void find_max(int * a, int size, int * idx, int * val);

void find_min(int * a, int size, int * idx, int * val) {
    *idx = 0;
    *val = a[0];
    for(int i = 1; i < size; ++i) {
        if (a[i] < *val) {
            *val = a[i];
            *idx = i;
        }
    }
}

void find_max(int * a, int size, int * idx, int * val) {
    *idx = 0;
    *val = a[0];
    for(int i = 1; i < size; ++i) {
        if (a[i] > *val) {
            *val = a[i];
            *idx = i;
        }
    }
}


int main() {
    int arr[SIZE] = {0};
    int idx_max, max, idx_min, min;

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    find_min(arr, SIZE, &idx_min, &min);
    find_max(arr, SIZE, &idx_max, &max);

    printf("%i %i %i %i", idx_max + 1, max, idx_min + 1, min);
}
