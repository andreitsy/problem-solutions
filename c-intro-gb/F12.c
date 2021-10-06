#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 10

void swap_max_min(int a[], int size) {
    int tmp, max_val = a[0], max_i = 0, min_val = a[0], min_i = 0;
    for(int i = 0; i < size; ++i) 
    {
        if (a[i] > max_val) {
            max_val = a[i];
            max_i = i;
        }
        if (a[i] < min_val) {
            min_val = a[i];
            min_i = i;
        }
    }
    tmp = a[min_i];
    a[min_i] = a[max_i];
    a[max_i] = tmp;
}

int main() {
    int a[MAX_SIZE] = {0};

    for(int i = 0; i < MAX_SIZE; i++) 
    {
        scanf("%i", &a[i]);
    }
    swap_max_min(a, MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; i++) 
    {
        printf("%i ", a[i]);
    }

}
