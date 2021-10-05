#include <stdio.h>

int max_find(int max) {
    int m;
    scanf("%i", &m);
    if (m == 0)
        return max;
    if (m > max) {
        max = m;
    }
    max_find(max);
}

int main() {
    printf("%i", max_find(-10000));
}
