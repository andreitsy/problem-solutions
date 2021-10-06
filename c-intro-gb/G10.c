#include <stdio.h>
#define MAX_WORD_LENGTH 1002

int main()
{
    FILE *from, *to;
    char word_max[MAX_WORD_LENGTH] = {'\0'};
    char word[MAX_WORD_LENGTH] = {'\0'};
    int len = 0, max_len = -1;
    char c;
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    
    while((c = fgetc(from)) != EOF) {
        if (c == ' ') {
            word[len] = '\0';
            if (len > max_len) {
                for(int i = 0; i <= len; ++i) {
                    word_max[i] = word[i];
                }
                max_len = len;
            }
            len = 0;
        } else {
            word[len++] = c;
        }
    }
    if (len > max_len) {
        for(int i = 0; i <= len; ++i) {
            word_max[i] = word[i];
        }
            max_len = len;
    }
    fprintf(to, "%s", word_max);

    fclose(to);
    fclose(from);
}
