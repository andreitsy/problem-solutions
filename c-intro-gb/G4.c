#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 1000

int main()
{
    int len;
    FILE *from, *to;
    char symbols[256] = {0};
    char buff[BUFF_SIZE];
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");

    fgets(buff, BUFF_SIZE, from);

    for(int i = 0; i < strlen(buff); ++i) {
        if (buff[i] < 256) {
            symbols[buff[i]] += 1;
        }
    }

    for(int i = 0; i < 250; ++i) {
        if (symbols[i] == 1) {
            fputc((char) i, to);
        }
    }

    fclose(to);
    fclose(from);
}
