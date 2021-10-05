#include <stdio.h>

int is_prime(int n, int delitel) {
    if (n == 2) {
        return 1;
    }
    if ((n <= 1) || (n % delitel == 0))
        return 0;
    if (delitel * delitel >= n) {
        return 1;
    }
    return is_prime(n, delitel + 1);
}


int main() {
    int n;

    scanf("%i", &n);
    if (is_prime(n, 2)) {
        printf("YES");
    } else {
        printf("NO");
    }

}
