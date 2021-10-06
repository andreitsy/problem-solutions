#include <stdio.h>
#define SIZE 10

int main() {
    int arr_p[SIZE] = {0};
    int arr_n[SIZE] = {0};
    int n, i_p = 0, i_n = 0;

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &n);
        if (n > 0) {
            arr_p[i_p++] = n;
        }
        if (n < 0) {
            arr_n[i_n++] = n;
        }
    }

    for(int i = 0; i < i_p; ++i) {
        printf("%i ", arr_p[i]);
    }
    for(int i = 0; i < i_n; ++i) {
        printf("%i ", arr_n[i]);
    }

}
