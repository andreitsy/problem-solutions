#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

char pop();
void push(char c);

int stack_size = 0;
char stack[MAX_SIZE] = {'\0'};

char pop() {
    return stack[stack_size--];
}

void push(char c) {
    stack[++stack_size] = c;
}

int main (int argc, char *argv[]) {

    char *line = NULL;
    size_t len = 0;

    getline(&line, &len, stdin);

    for(int i = 0; i < len; ++i) {
        if (line[i] == '.')
            break;
        if (line[i] == '(') {
            push(line[i]);
        } else if (line[i] == ')') {
            if (pop() != '(') {
                break;
                stack_size = -1;
            }
        }
    }

    if (stack_size == 0) {
         printf("YES");
    } else {
         printf("NO");
    }

    free(line);

}
