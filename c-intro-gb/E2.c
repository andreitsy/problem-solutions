#include <stdio.h>
#define SIZE 5

int find_min(int * a, int size) {
    int min_v = a[0];
    for(int i = 0; i < size; ++i) {
        if (a[i] < min_v) {
            min_v = a[i];
        }
    }
    return min_v;
}

int main() {
    int arr[SIZE] = {0};
    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    printf("%i", find_min(arr, SIZE));
}
