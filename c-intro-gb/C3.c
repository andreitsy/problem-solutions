#include <stdio.h>

int middle(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int n, p;
    scanf("%i %i", &n, &p);

    printf("%lli", middle(n, p));

}
