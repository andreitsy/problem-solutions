#include <stdio.h>

int main() {
    char c = EOF, prev_c = EOF;
    int num = 0;

    do {
        if (c != prev_c) {
            if (prev_c != EOF) {
                printf("%c%i", prev_c, num);
            }; 
            num = 1;
        } else {
            num++;
        }
        prev_c = c;
    } while (((c = getchar()) != EOF) && c != '.');
    printf("%c%i", prev_c, num); 
}
