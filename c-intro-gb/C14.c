#include <stdio.h>

int sum_digits(int val) {
    int sum_val = 0;
    while(val > 0) {
        sum_val += val % 10;
        val /= 10;
    }
   return sum_val % 2 == 0; 
}

int main() {
    int val = 0;

    scanf("%i", &val);
    if (sum_digits(val)) {
        printf("YES");
    } else {
        printf("NO");
    } 

}
