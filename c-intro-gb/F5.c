#include <stdio.h>
#define MAX_SIZE 100

int max_array(int size, int a[]) {
    int max_element = a[0];

    for(int i = 1; i < size; ++i)
    {
        if (a[i] > max_element) {
            max_element = a[i];
        }
    }
    return max_element;
}

int main() {
    int a[MAX_SIZE];

    for(int i = 0; i < MAX_SIZE; ++i) {
        scanf("%i", &a[i]);
    }
    printf("%i", max_array(MAX_SIZE, a));
}
