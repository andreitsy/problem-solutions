#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 1000
#define NUM_LETTERS 26
int main()
{
    FILE *from, *to;
    char name[BUFF_SIZE];
    char surname[BUFF_SIZE];
    char family_name[BUFF_SIZE];
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");

    fscanf(from, "%s %s %s", family_name, name, surname);
    fprintf(to, "Hello, %s %s!", name, family_name);

    fclose(to);
    fclose(from);
}
