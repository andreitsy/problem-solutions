#include <stdio.h>

long long power(int n, int p) {
    long long rez = 1;
    for(int i = 0; i < p; i++) {
        rez *= n;
    }
    return rez;
}

int main() {
    int n, p;
    scanf("%i %i", &n, &p);

    printf("%lli", power(n, p));

}
