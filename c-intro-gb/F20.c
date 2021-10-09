#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE] = {0};
    int odd_c = 0, even_c = 0, p;
    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_c++;
        } else {
            odd_c++;
        }
    }
    if (even_c > odd_c) {
        for(int i = 0; i < SIZE; ++i) {
            if (arr[i] % 2) {
                p = 1;
                while(arr[i] > 0) {
                    if ((arr[i] % 10) % 2)
                       p *= arr[i] % 10;
                    arr[i] /= 10;
                }
                arr[i] = p;
            }
        }
    } else {
        for(int i = 0; i < SIZE; ++i) {
            if (arr[i] % 2 == 0) {
                p = 1;
                while(arr[i] > 0) {
                if ((arr[i] % 10) % 2 == 0)
                    p *= arr[i] % 10;
                    arr[i] /= 10;
                }
                arr[i] = p;
            }
        }
    }
    for(int i = 0; i < SIZE; ++i) {
        printf("%i ", arr[i]);
    }
}
