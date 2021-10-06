#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int max_index(int a[], int size) {
    int max_val = a[0], max_index = 0;
    for(int i = 0; i < size; ++i) 
    {
        if (a[i] > max_val) {
            max_val = a[i];
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    int a[MAX_SIZE] = {0};
    int max_i = 0, n = 0;

    for(int i = 0; i < MAX_SIZE; i++) 
    {
        scanf("%i", &a[i]);
    }
    max_i = max_index(a, MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; i++) 
    {
        if (abs(a[i]) > abs(a[max_i])) {
            n++;
        }
    }
    printf("%i", n);
}
