#include <stdio.h>
#define MAX_NUM 35

int main() {
    int x, rev_x = 0;

    scanf("%i", &x);
    while(x > 0) {
        rev_x = rev_x * 10 + x % 10;
        x /= 10;
    }
    printf("%i", rev_x);


}
