#include <stdio.h>

int abs(int n) {
    return n > 0 ? n : -n;
}

int main() {
    int n;
    scanf("%i", &n);

    printf("%i", abs(n));

}
