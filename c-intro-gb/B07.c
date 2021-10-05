#include <stdio.h>
#define DIGIT_NUM 10

int main() {
    int arr[DIGIT_NUM] = {0};
    int n, found = 0;
    scanf("%i", &n);


    while(n > 0) {
        arr[n % 10] += 1;
        n /= 10;
    }
    for (int i = 0; i < DIGIT_NUM; ++i) {
        if (arr[i] > 1) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("YES");
    } else {
        printf("NO");
    }
}
