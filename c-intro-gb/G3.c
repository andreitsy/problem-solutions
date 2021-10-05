#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 1001

int main()
{
    int len;
    FILE *from, *to;
    char buff[BUFF_SIZE] = {'\0'};
    char last_c;
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    fgets(buff, BUFF_SIZE, from);
    len = strlen(buff);
    last_c = buff[len - 2];
    
    //printf("%s %c", buff, last_c);

    for (int i = 0; i < len - 2; ++i) {
        if (buff[i] == last_c) {
            fprintf(to, "%i ", i);
        }
    }
    fclose(to);
    fclose(from);
}
