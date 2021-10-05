#include <stdio.h>

int main() {
    int val = 0, sum_val = 0;

    scanf("%i", &val);
    while(val > 0) {
        sum_val += val % 10;
        val /= 10;
    }

    printf("%i", sum_val); 

}
