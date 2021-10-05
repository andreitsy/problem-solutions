#include <stdio.h>
#define MAX_SIZE 100

int pack(int size, int *in, int *out) {
    int cur = 0;

    if (in[0] == 1) {
        out[cur] = 0;
        cur++;
    };
    out[cur] = 1;

    for(int i = 1; i < size; ++i) {
        if (out[cur] == -1) {
            out[cur] = 0;
        }

        if (in[i - 1] != in[i]) {
            cur++;
            out[cur] = 1;
        } else {
            out[cur] += 1;
        }
    }
    return cur;
}

int main() {
    int a[MAX_SIZE];
    int b[MAX_SIZE] = {-1};
    int b_size = 0;

    for(int i = 0; i < MAX_SIZE; ++i) {
        scanf("%i", &a[i]);
    }
    
    b_size = pack(MAX_SIZE, a, b);

    printf("[%i", b[0]);
    for(int i = 1; i <= b_size; ++i) {
        printf(",%i", b[i]);
    }
    printf("]");

}
