#include <stdio.h>

int recurs_power(int n, int p)
{
    if (p > 0) 
        return n * recurs_power(n, p-1);
    return 1;
}

int main() {
    int n, p;
    scanf("%i %i", &n, &p);
    printf("%i", recurs_power(n, p));
}
