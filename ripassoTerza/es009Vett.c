#include <stdio.h>

#define DIM 11

void setMatPitagora(int x, int y, int mat[y][x]) {
    for(int i = 0; i < y; i ++)
        for(int j = 0; j < x; j ++)
            mat[i][j] = i * j;
}
void printMatInt(int x, int y, int mat[y][x]) {
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int mat[DIM][DIM];

    setMatPitagora(DIM, DIM, mat);
    printMatInt(DIM, DIM, mat);

    return 0;
}
