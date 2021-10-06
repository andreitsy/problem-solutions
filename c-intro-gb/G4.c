#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 1000
#define NUM_LETTERS 26
int main()
{
    FILE *from, *to;
    char word1[BUFF_SIZE];
    char word2[BUFF_SIZE];
    int word1_unique[NUM_LETTERS] = {0};
    int word2_unique[NUM_LETTERS] = {0};
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");

    fscanf(from, "%s %s", word1, word2);

    for(int i = 0; i < strlen(word1); ++i) {
        word1_unique[word1[i] - 'a']++;
    }
    for(int i = 0; i < strlen(word2); ++i) {
        word2_unique[word2[i] - 'a']++;
    }
    
    for(int i = 0; i < NUM_LETTERS; ++i) {
        if(word1_unique[i] == 1 && word2_unique[i] == 1) {
            fprintf(to, "%c ", (char)('a' + i));
        }
    }

    fclose(to);
    fclose(from);
}
