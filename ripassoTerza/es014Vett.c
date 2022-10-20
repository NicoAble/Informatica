#include <stdio.h>

#define NR 4
#define NC 5

void stampaMat(int y, int x, int mat[y][x]) {
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}
int nNumSimm(int y, int x, int mat[][x]) {
    int n = 0;
    for(int i = 0; i < y; i ++)
        for(int j = 0; j < x / 2; j ++)
            if(mat[i][j] == mat[i][x - 1 - j])
                n ++;
    if(x % 2 == 1)
        return n + y;
    else
        return n;
}

int main() {
    int mat[NR][NC] = {
            {0, 1, 1, 3, 0},
            {2, 1, 5, 2, 3},
            {4, 3, 4, 3, 4},
            {5, 6, 3, 6, 1}
    };
    stampaMat(NR, NC, mat);
    printf("\nnumeri simmetrici: %d", nNumSimm(NR, NC, mat));

    return 0;
}
