#include <stdio.h>
#include <stdlib.h>

int digit_to_num(char c) {
    if ('0' <= c && c <= '9') {
        return (int) (c - '0');
    }
    return 0;
}

int main (int argc, char *argv[]) {

    char *line = NULL;  /* forces getline to allocate with malloc */
    size_t len = 0;     /* ignored when line = NULL */
    int sumka = 0;
    ssize_t read;

    read = getline(&line, &len, stdin);

    for(int i = 0; i < len; ++i) {
        if (line[i] == '.')
            break;
        sumka += digit_to_num(line[i]);
    }

    printf("%d", sumka);



    free (line);  /* free memory allocated by getline */

    return 0;
}
