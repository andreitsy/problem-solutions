#include <stdio.h>

int main() {
    int n, flag = 1, prev = 10;
    scanf("%i", &n);

   do {
        if (prev <= n % 10) {
            flag = 0;
            break;
        }
        prev = n % 10;
        n /= 10;
    } while (n > 0);
    

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }
}
