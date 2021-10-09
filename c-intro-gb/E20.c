#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int pow_10(int pow) {
    if (pow == 0) {
        return 1;
    }
    return 10 * pow_10(pow-1);
}

int max_num(int n) {
    int p = 0, rez = 0;
    int a[MAX_LEN] = {0};

    while(n > 0) {
        a[p++] = n % 10;
        n /= 10;
    }

    qsort(a, p, sizeof(int), cmpfunc);

    for(int i = 0; i < p; ++i) {
        rez += a[i] * pow_10(p - i - 1); 
    }
    return rez;
}

int main() {
    int m;
    scanf("%i", &m);
    printf("%i", max_num(m));
}
