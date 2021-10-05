#include <stdio.h>
#define MAX_SIZE 100

int two_identical(int size, int a[]) {
    for(int i = 0; i < size; ++i) {
        for(int  j = i + 1; j < size; ++j) {
            if (a[i] == a[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int a[MAX_SIZE];

    for(int i = 0; i < MAX_SIZE; ++i) {
        scanf("%i", &a[i]);
    }
    if (two_identical(MAX_SIZE, a)) {
        printf("YES");
    } else {
        printf("NO");
    }
}
