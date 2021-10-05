#include <stdio.h>


int akkerman(int m, int n)
{
    if (m == 0){
        return n + 1;
    }
    else if((m > 0) && (n == 0)){
        return akkerman(m - 1, 1);
    }
    else if((m > 0) && (n > 0)){
        return akkerman(m - 1, akkerman(m, n - 1));
    }
}

int main() {
    int n, m;
    scanf("%i %i", &m, &n);
    printf("%i", akkerman(m, n));
}
