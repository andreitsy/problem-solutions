#include <stdio.h>

#define MAX_SIZE 5

int main() {
    int arr[MAX_SIZE];
    int min_val;

    for(int i = 0; i < MAX_SIZE; ++i) {
        scanf("%i", arr + i);
    }
    min_val = arr[0];
    for(int i = 1; i < MAX_SIZE; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    printf("%d\n", min_val); 

}
