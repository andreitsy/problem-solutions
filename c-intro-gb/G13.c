#include <stdio.h>
#define MAX_STR_LEN 1000
#define MAX_FILE_LEN 100

int main()
{
    FILE *from, *to;
    char path[MAX_STR_LEN] = {'\0'};
    char file_name[MAX_FILE_LEN] = {'\0'};
    int len = 0, point_i = 0;
    char c;
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    
    while((c = fgetc(from)) != EOF) {
        path[len++] = c;
        if (c == '/') {
            point_i = 0;
        } else {
            if (c == '.') {
                point_i = len;
            }
        }
    }
    if (point_i != 0) {
        len = point_i;
    }

    path[len - 1] = '.';
    path[len] = 'h';
    path[len+1] = 't';
    path[len+2] = 'm';
    path[len+3] = 'l';
    path[len+4] = '\0';

    fprintf(to, "%s", path);

    fclose(to);
    fclose(from);
}
