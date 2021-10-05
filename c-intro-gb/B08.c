#include <stdio.h>
#define DIGIT_NUM 10

int main() {
    int arr[DIGIT_NUM] = {0};
    int n, all_odd = 1;
    scanf("%i", &n);


    while(n > 0) {
        if ((n % 10) % 2 == 1) {
            all_odd = 0;
        }
    }

    if (all_odd) {
        printf("YES");
    } else {
        printf("NO");
    }
}
