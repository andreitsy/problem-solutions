#include <stdio.h>

#define IN 1 /* inside word */
#define OUT 2 /* outside word */

int main() {
    int state = OUT;
    long nc = 0, nw = 0, nl = 0;
    char c;

    while((c = getchar()) != EOF) {
        ++nc; /* count symbols */

        if (c == '\n') { /* count new line */
            nl++;
        }
        /* count words */
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
	}

	printf("%ld %ld %ld\n", nl, nw, nc);
	return 0;
}
