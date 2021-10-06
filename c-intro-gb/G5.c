#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 1000

//max size > 100!!!

int main()
{
    int len;
    FILE *from, *to;
    char buff[BUFF_SIZE];
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    fgets(buff, BUFF_SIZE, from);
    for(int i = 0; i < strlen(buff); ++i) {
        if (buff[i] == 'a') {
            buff[i] = 'b';
            continue;
        }
        if (buff[i] == 'b') {
            buff[i] = 'a';
            continue;
        }

        if (buff[i] == 'A') {
            buff[i] = 'B';
            continue;
        }
        if (buff[i] == 'B') {
            buff[i] = 'A';
            continue;
        }

    }

    fprintf(to, "%s", buff);

    fclose(to);
    fclose(from);
}
