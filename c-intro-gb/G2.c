#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j;
    char c;
    FILE *from, *to;
    
    from = fopen("input.txt", "r");
    to = fopen("output.txt", "w");

    fscanf(from, "%i", &n);

    j = 2;
    c = 'A';
    for(int i = 1; i <= n; ++i) 
    {
        if (j >= 10) {
            j = 2;
        }
        if (i % 2 == 1) {
            fprintf(to, "%c", c);
            c++;
        } else {
            fprintf(to, "%i", j);
            j += 2;
        }
    }

    fclose(to);
    fclose(from);
}
