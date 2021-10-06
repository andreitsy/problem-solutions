#include <stdio.h>
#define SIZE 10


int main() {
    int arr[SIZE] = {0};

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    for(int i = 0; i < SIZE; ++i) {
        if ((arr[i] / 10) % 10 == 0) {
           printf("%i ", arr[i]);
        }
    }
}
