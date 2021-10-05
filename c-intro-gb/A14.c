#include <stdio.h>

int main() {
    int val = 0, d_val = -1;

    scanf("%i", &val);
    while(val > 0) {
        if (d_val < (val % 10)) {
            d_val = val % 10;
        };
        val /= 10;
    }

    printf("%i", d_val); 

}
