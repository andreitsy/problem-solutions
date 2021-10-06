#include <stdio.h>
#define SIZE 10
#define MAX_NUMBER 65536

int main() {
    int arr[SIZE] = {0};
    int num[MAX_NUMBER] = {0};

    for(int i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
        num[arr[i]] += 1;
    }

    for(int i = 0; i < SIZE; ++i) {
        if (num[arr[i]] > 1) {
           printf("%i ", arr[i]);
           num[arr[i]] = 0;
        }
    }
}
