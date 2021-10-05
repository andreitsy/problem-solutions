#include <stdio.h>
#define SIZE 12

void inverse(int * a, int * b) {
    int tmp;
    while(a < b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
        a++;
        b--;
    }
}


int main() {
    int arr[SIZE] = {0};

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    inverse(arr, arr + 3);
    inverse(arr + 4, arr + 7);
    inverse(arr + 8, arr + 11);

    for(int i = 0; i < SIZE; ++i) {
        printf("%i ", arr[i]);
    }
}
