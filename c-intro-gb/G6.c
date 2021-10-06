#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 1000

int is_polindrom(char * str) {
    int b = 0, e = strlen(str) - 1;
    if (str[e] == '\n')
        e--;

    while(b < e) {
        if (str[b] != str[e]) {
            return 0;
        }
        ++b;
        --e;
    }
    return 1;
}

int main()
{
    int len;
    FILE *from, *to;
    char buff[BUFF_SIZE];
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    fgets(buff, BUFF_SIZE, from);
    if (is_polindrom(buff)) {
        fprintf(to, "YES");
    } else {
        fprintf(to, "NO");
    }

    fclose(to);
    fclose(from);
}
