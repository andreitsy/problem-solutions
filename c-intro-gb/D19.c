#include <stdio.h>

int acounter() {
    char c;
    int len = 0;

    while((c = getchar()) != '.') {
        if (c == 'a')
           len ++; 
    }
    return len;
}

int main (int argc, char *argv[]) {
   printf("%i", acounter());
}
