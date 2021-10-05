#include <stdio.h>

#define MAX_SIZE 5

int main() {
    int arr[MAX_SIZE];
    int max_val;

    for(int i = 0; i < MAX_SIZE; ++i) {
        scanf("%i", arr + i);
    }
    max_val = arr[0];
    for(int i = 1; i < MAX_SIZE; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    printf("%d\n", max_val); 

}
