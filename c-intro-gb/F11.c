#include <stdio.h>

#define MAX_SIZE 30

int main() {
    int a[MAX_SIZE] = {0};
    int n, min_val1, min_val2, min_i1, min_i2;

    for(int i = 0; i < MAX_SIZE; ++i) 
    {
        scanf("%i", &a[i]);
    }
    if (a[0] < a[1]) {
        min_val1 = a[0];
        min_i1 = 0;
        min_val2 = a[1];
        min_i2 = 1;
    } else {
        min_val1 = a[1];
        min_i1 = 1;
        min_val2 = a[0];
        min_i2 = 0;
    }
    for(int i = 2; i < MAX_SIZE; ++i) 
    {
        if (min_val2 > a[i]) {
            if (min_val1 > a[i]) {
                min_val2 = min_val1;
                min_i2 = min_i1;

                min_val1 = a[i];
                min_i1 = i;
            } else {
                min_val2 = a[i];
                min_i2 = i;
            }
        }
    }
    if (min_i2 > min_i1) {
       printf("%i %i", min_i1, min_i2);
    } else {
       printf("%i %i", min_i2, min_i1);
    }
}
