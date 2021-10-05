#include <stdio.h>
#define MAX_LENGTH 1000

char to_lower_f(char x) {
    if ((x >= 65) && (x <= 90)) {
        return x + 32;
    } else {
        return x;
    }
}

int main() {
    char c, str[MAX_LENGTH] = {'\0'};
    int i = 0;
    while((c = getchar()) != '.') {
        str[i] = to_lower_f(c);
        i++;
    }
    printf("%s", str);
}
