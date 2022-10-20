#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NRIGHE 2
#define NCOLONNE 2

void caricaMat(int mat[][NCOLONNE], int nr, int nc) {
    for (int r=0; r<nr; r++) {
        for(int c=0; c<nc; c++) {
            printf("Inserisci elemento di riga %d e colonna %d: ", r+1, c+1);
            scanf("%d", &mat[r][c]);
        }
    }
}

bool verificaSpeculiarita(int mat[][NCOLONNE], int nr, int nc) {
    int r, c;
    bool verificare = true;

    r = 0;
    c = 0;

    while(r < nr && verificare == true) {
        while(c < nc && verificare == true) {
            if(mat[r][c] != mat[r][nc - 1 - c]) {
                verificare = false;
            }
            c++;
        }
        r++;
    }
    return verificare;
}

main() {
    int mat[NRIGHE][NCOLONNE];

    caricaMat(mat, NRIGHE, NCOLONNE);

    if(verificaSpeculiarita(mat, NRIGHE, NCOLONNE) == true) {
        printf("La matrice e' speculare\n");
    } else {
        printf("La matrice non e' speculare\n");
    }
}
