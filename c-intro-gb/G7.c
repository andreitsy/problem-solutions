#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 10000


int main()
{
    int n_lower = 0, n_upper = 0;
    FILE *from, *to;
    char buff[BUFF_SIZE];
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    fgets(buff, BUFF_SIZE, from);
    for(int i = 0; i < strlen(buff); ++i) {
        if ((buff[i] >= 'a') && (buff[i] <= 'z')) {
            n_lower++;
            continue;
        }
        if ((buff[i] >= 'A') && (buff[i] <= 'Z')) {
            n_upper++;
            continue;
        }
    }

    fprintf(to, "%i %i", n_lower, n_upper);

    fclose(to);
    fclose(from);
}
