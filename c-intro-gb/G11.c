#include <stdio.h>
#define MAX_WORD_LENGTH 1002

int main()
{
    FILE *from, *to;
    char word[MAX_WORD_LENGTH] = {'\0'};
    int len = 0, num_word_a = 0;
    char c;
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");
    
    while((c = fgetc(from)) != EOF && c != '\n') {
        if (c == ' ') {
            if (word[len-1] == 'a') {
                num_word_a++;
            } 
            word[len] = '\0';
            len = 0;
        } else {
            word[len++] = c;
        }
    }
    if (len > 0) {
        if (word[len-1] == 'a') {
            num_word_a++;
        } 
    }
    fprintf(to, "%i", num_word_a);

    fclose(to);
    fclose(from);
}
