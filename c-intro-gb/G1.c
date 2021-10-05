#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 300

//max size > 100!!!

int main()
{
    int len;
    FILE *from, *to;
    char buff[BUFF_SIZE];
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    fgets(buff, BUFF_SIZE, from);
    buff[strlen(buff) - 1] = '\0';

    fprintf(to, "%s, %s, %s %i", buff, buff, buff, strlen(buff));

    fclose(to);
    fclose(from);
}
