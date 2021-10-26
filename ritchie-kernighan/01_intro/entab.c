#include <stdio.h>

#define TAB '\t' /* tab symbol */
#define SPACE ' ' /* space symbol */
#define NUM_SPACES 4 /* number of spaces to replace */

int main() {
    char c;
    int n = 0;

    while((c = getchar()) != EOF) {
        if (c == TAB) {
            n = NUM_SPACES;
            while (n--) {
                putchar(' ');
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}
