#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 10

void swap_neg_last(int a[], int size) {
    int tmp, max_val = INT_MIN, max_index = size - 1;
    for(int i = 0; i < size; ++i) 
    {
        if ((a[i] < 0) && (a[i] > max_val)) {
            max_val = a[i];
            max_index = i;
        }
    }
    tmp = a[size - 1];
    a[size - 1] = a[max_index];
    a[max_index] = tmp;
}

int main() {
    int a[MAX_SIZE] = {0};

    for(int i = 0; i < MAX_SIZE; i++) 
    {
        scanf("%i", &a[i]);
    }
    swap_neg_last(a, MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; i++) 
    {
        printf("%i ", a[i]);
    }

}
