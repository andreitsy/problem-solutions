#include <stdio.h>

int grow_up(int n) {
    int prev_n = 10, flag = 1;
    while(n > 0) {
        if (prev_n > (n % 10)) {
            prev_n = n % 10;
        } else {
            flag = 0;
            break;
        };
        n /= 10;
    }
    return flag;
}

int main() {
    int val = 0;

    scanf("%i", &val);
        if (grow_up(val)) {
        printf("YES");
    } else {
        printf("NO");
    }

}
