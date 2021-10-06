#include <stdio.h>

int main()
{
    FILE *from, *to;
    char c;
    int unique_c[255] = {0};
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    
    while((c = fgetc(from)) != EOF) {
        if (c != ' ' && unique_c[c] == 0) {
            fputc(c, to);
        }
        unique_c[c] = 1;
    }

    fclose(to);
    fclose(from);
}
