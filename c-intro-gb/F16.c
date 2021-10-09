#include <stdio.h>
#define BLACK 1
#define WHITE 0
#define DESK_SIZE 8

int main() {
    char p[2];
    int chess_desk[DESK_SIZE][DESK_SIZE];
    for (int i = 0; i < DESK_SIZE; i++) {
        for(int j = 0; j < DESK_SIZE; j++) {
            chess_desk[i][j] = (i + j + 1) % 2;
        }
    }
    
    scanf("%s", p);
    if (chess_desk[p[0] - 'A'][p[1] - '1'] == BLACK) {
        printf("BLACK");
    } else {
        printf("WHITE");
    }

}
