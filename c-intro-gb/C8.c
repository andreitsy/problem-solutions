#include <stdio.h>
#define MAX_LENGTH 1000

char to_upper_f(char x) {
    if ((x >= 97) && (x <= 122)) {
        return x - 32;
    } else {
        return x;
    }
}

int main() {
    char c, str[MAX_LENGTH] = {'\0'};
    int i = 0;
    while((c = getchar()) != '.') {
        str[i] = to_upper_f(c);
        i++;
    }
    printf("%s", str);
}
