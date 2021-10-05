#include <stdio.h>
#define SIZE 10

void move_cyclic(int * a, int * b) {
    int prev = *a, tmp = *a;
    *a = *(b-1);
    a++;
    while(a < b) {
        prev = *a;
        *a = tmp;
        a++;
        tmp = prev;
    }
    
}


int main() {
    int arr[SIZE] = {0};

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    move_cyclic(arr, arr + SIZE);

    for(int i = 0; i < SIZE; ++i) {
        printf("%i ", arr[i]);
    }
}
