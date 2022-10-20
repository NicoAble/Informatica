#include <stdio.h>

#define MAXDIM 10

int leggiNum() {
    int n;
    do {
        printf("Inserisci la dimensione (max %d): ", MAXDIM);
        scanf("%d", &n);
    } while(n > MAXDIM);
    return n;
}
void setMatInt(int x, int mat[x][x]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
}
void printMatInt(int x, int mat[x][x]) {
    for(int i = 0; i < x; i ++) {
        for(int j = 0; j < x; j ++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}
int diagPrinc(int x, int mat[x][x]) {
    int n = 0;
    for(int k = 0; k < x; k ++)
        n += mat[k][k];
    return n;
}
int diagSec(int x, int mat[x][x]) {
    int n = 0;
    for(int k = 0; k < x; k ++)
        n += mat[k][x - 1 - k];
    return n;
}

int main() {
    int dim = leggiNum();
    int mat[dim][dim];
    setMatInt(dim, mat);

    printf("\n");
    printMatInt(dim, mat);
    printf("\nDiagonale principale: %d.\nDiagonale secondaria: %d.", diagPrinc(dim, mat), diagSec(dim, mat));

    return 0;
}
