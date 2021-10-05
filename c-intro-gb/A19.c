#include <stdio.h>

int condition_triangle(int a, int b, int c) {
    if ((a + b > c) &&
        (c + a > b) &&
        (b + c > a)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (condition_triangle(a, b, c)) {
        printf("YES");
    } else {
        printf("NO");
    }

}
