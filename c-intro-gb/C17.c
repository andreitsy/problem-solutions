#include <stdio.h>

int is_happy_number(int n) {
   int sum_d = 0, prod_d = 1;

   while(n > 0) {
       sum_d += n % 10;
       prod_d *= n % 10;
       n /= 10;
   }
   return sum_d == prod_d;

}

int main() {
   int a;
   scanf("%i", &a);
  if (is_happy_number(a)) {
       printf("YES");
   } else {
       printf("NO");
   }
}
