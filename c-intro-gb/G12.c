#include <stdio.h>

int main()
{
    FILE *from, *to;
    char c;
    int prev_word = 1;
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    
    while((c = fgetc(from)) != EOF) {
        if (c != ' ') {
            fputc(c, to);
            prev_word = 0;
        } else {
            if (!prev_word) {
                prev_word = 1;
                fputc('\n', to);
            }
        }
    }

    fclose(to);
    fclose(from);
}
