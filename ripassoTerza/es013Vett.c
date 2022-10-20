#include <stdio.h>

#define NR 5
#define NC 10
#define LUNG 20

void leggiMatdaFile(int y, int x, int mat[][x], FILE* fp) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++)
            fscanf(fp, "%d ", &mat[i][j]);
        fscanf(fp, "\n");
    }
}
void stampaMat(int y, int x, int mat[][x]) {
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}
int sommaColonna(int y, int x, int mat[][NC]) {
    int n = 0;
    for(int k = 0; k < y; k ++)
        n += mat[k][x];
    return n;
}
void sommaColonne(int y, int x, int vett[], int mat[][x]) {
    for(int k = 0; k < x; k ++)
        vett[k] = sommaColonna(y, k, mat);
}
void stampaVett(int vett[], int dim) {
    for(int k = 0; k < dim; k ++)
        printf("[%d]: %d\n", k, vett[k]);
}

int main() {
    char nome[LUNG];
    int mat[NR][NC];
    int vett[NC];

    printf("inserisci il nome del file: ");
    scanf("%s", nome);

    FILE* fp = fopen(nome, "r");
    if(fp != NULL) {
        leggiMatdaFile(NR, NC, mat, fp);
        stampaMat(NR, NC, mat);
        sommaColonne(NR, NC, vett, mat);
        stampaVett(vett, NC);
    } else
        printf("file non trovato\n");
    fclose(fp);

    return 0;
}
