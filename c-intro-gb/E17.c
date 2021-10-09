#include <stdio.h>
#define SIZE 10
#define MAX_NUMBER 65536

int count_num(int num, int *a, int size) {
    int cnt = 0;
    for (int i = 0; i < size; ++i) {
        if (num == a[i]) {
            cnt++;
        }
    }
    return cnt;
} 

int main() {
    int arr[SIZE] = {0};
    int freq;

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    for(int i = 0; i < SIZE; ++i) {
        freq = count_num(arr[i], arr, SIZE); 
        if (freq == 1) {
            printf("%i ", arr[i]);
        }
    }
}
