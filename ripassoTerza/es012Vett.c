#include <stdio.h>

#define NR 5
#define NC 10
#define LUNG 50

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
int sommaRiga(int x, int vett[]) {
    int n = 0;
    for(int k = 0; k < x; k ++)
        n += vett[k];
    return n;
}
void sommaRighe(int y, int x, int vett[], int mat[][x]) {
    for(int k = 0; k < y; k ++)
        vett[k] = sommaRiga(x, mat[k]);
}
void stampaVett(int vett[], int dim) {
    for(int k = 0; k < dim; k ++)
        printf("riga %d: %d\n", k, vett[k]);
}

int main() {
    char nome[LUNG];
    int mat[NR][NC];
    int vett[NR];

    printf("inserire il nome del file del file: ");
    scanf("%s", nome);

    FILE* fp = fopen(nome, "r");
    if(fp != NULL) {
        leggiMatdaFile(NR, NC, mat, fp);
        stampaMat(NR, NC, mat);
        sommaRighe(NR, NC, vett, mat);
        stampaVett(vett, NR);
    } else
        printf("file non trovato\n");
    fclose(fp);

    return 0;
}
