#include <stdio.h>
#define MAX_SIZE 100

void reverse_string(char * str, int last) {
    if (last >= 0) {
        printf("%c", str[last]);
        reverse_string(str, last-1);
    }
}

int main (int argc, char *argv[]) {
    char line[MAX_SIZE];
    int len = 0;

    while((line[len] = getchar()) != '.') {
        len++;
    }
    line[len] = '\0';
    reverse_string(line, len-1);
}
