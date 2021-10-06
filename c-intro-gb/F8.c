#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int a[MAX_SIZE + 1] = {0};
    int n = -1, m = MAX_SIZE + 2, val;

    for(int i = 0; i < MAX_SIZE; i++) 
    {
        scanf("%i", &val);

        if (val == 0) {
            break;
        }
        if (val < MAX_SIZE + 1) {
            a[val] = 1;
        }
        if (val > n) {
            n = val;
        }
        if (val < m) {
            m = val;
        }
   }

   for(int i = m; i <= n; ++i) 
   {
       if (a[i] == 0) 
       {
           printf("%i", i);
           break;
       }
   }
}
