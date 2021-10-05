#include <stdio.h>

int main() {
   int a, sum_digit = 0;
   scanf("%i", &a);
   while(a > 0) {
       sum_digit += a % 10;
       a /= 10;
   }
   if (sum_digit == 10) {
       printf("YES");
   } else {
       printf("NO");
   }
}
