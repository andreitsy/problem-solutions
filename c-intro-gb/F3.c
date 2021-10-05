#include <stdio.h>

int main() {
    char c;
    int digits[10] = {0};

    while((c = getchar()) != EOF && c != '\n') {
        digits[c - '0'] += 1;
    }

    for (int i = 0; i < 10; ++i) {
        if (digits[i] != 0) {
            printf("%i %i\n", i, digits[i]);
        }
    }



}
