#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
    return '0' <= c && c <= '9';
}

int main (int argc, char *argv[]) {

    char *line = NULL;  /* forces getline to allocate with malloc */
    size_t len = 0;     /* ignored when line = NULL */
    int sumka = 0;
    ssize_t read;

    read = getline(&line, &len, stdin);

    for(int i = 0; i < len; ++i)
        sumka += is_digit(line[i]);

    printf("%d", sumka);



    free (line);  /* free memory allocated by getline */

    return 0;
}
