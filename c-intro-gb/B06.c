#include <stdio.h>

int main() {
    int x, prev = -1, found = 0;
    scanf("%i", &x);
    while(x > 0) {
        if (prev == (x % 10)) {
            found = 1;
            break;
        }
        prev = x % 10;
        x /= 10;
    }
    if (found) {
        printf("YES");
    } else {
        printf("NO");
    }
}
