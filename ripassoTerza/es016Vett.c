#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NR 4
#define NC 5

void stampaMat(int y, int x, int mat[][x]) {
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}

void setMinMaxMedia(int y, int x, int mat[][x], int* min, int* max, float* media) {


    for(int k = 0; k < y; k ++)
        for(int c = 0; c < x; c ++)
            if(c == 0 && k == 0) {
                *min = mat[0][0];
                *max = mat[0][0];
                *media = mat[0][0];

            } else {
                if(mat[k][c] < *min)
                    *min = mat[k][c];
                if(mat[k][c] > *max)
                    *max = mat[k][c];
                *media += mat[k][c];
            }
    *media /= (float)(y * x);
}

int main() {
    int mat[NR][NC] = {
        {0, 1, 1, 3, 0},
        {2, 1, 5, 2, 3},
        {4, 3, 4, 3, 4},
        {5, 6, 3, 6, 1}
    };
    stampaMat(NR, NC, mat);
    int min, max;
    float media;
    setMinMaxMedia(NR, NC, mat, &min, &max, &media);
    printf("il minimo e' %d\nil massimo e' %d\nla media e' %.2f\n", min, max, media);


    return 0;
}
