#include <stdio.h>

int sum_digits(int val) {
   if (val > 0)
       return (val % 10) + sum_digits(val / 10); 
   return 0;
}

int main() {
    int n;

    scanf("%i", &n);
    printf("%i", sum_digits(n));

}
