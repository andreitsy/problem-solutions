#include <stdio.h>
#define MIN_VAL -1

int f(int x) {
    if((-2 <= x) && (x < 2)) {
        return x * x;
    }
    if (x >= 2) {
        return x * x + 4 * x + 5;
    }
    if (x < -2) {
        return 4;
    }

}

int main() {
    int n, max_num = MIN_VAL;
    do {
        scanf("%i", &n);
        if (f(n) > max_num) {
            max_num = f(n);
        }
    } while(n != 0);

    printf("%i", max_num);
}
