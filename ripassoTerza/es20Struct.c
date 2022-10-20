#include <stdio.h>

#define L_STR 20
#define N_PROVE 10

typedef char String[L_STR];

typedef struct {
    String nome;
    int punteggi[N_PROVE];
    int totale;
} Partecipante;

int leggiPunteggio(int k) {
    int n;
    do {
        printf("punteggio della prova %d: ", k);
        scanf("%d", &n);
    } while(n < 0);
    return n;
}
Partecipante createPartecipante() {
    Partecipante ret;

    printf("nome del partecipante: ");
    scanf("%s", ret.nome);
    ret.totale = 0;
    for(int k = 0; k < N_PROVE; k ++) {
        ret.punteggi[k] = leggiPunteggio(k + 1);
        ret.totale += ret.punteggi[k];
    }

    return ret;
}
int leggiDim() {
    int n;
    do {
        printf("inserisci il numero dei partecipanti: ");
        scanf("%d", &n);
    } while(n < 0);
    return n;
}
void visOgniProva(Partecipante arr[], int dim) {
    for(int k = 0; k < N_PROVE; k ++) {
        Partecipante winner;
        for(int c = 0; c < dim; c ++)
            if (c == 0)
                winner = arr[c];
            else if (arr[c].punteggi[k] > winner.punteggi[k])
                winner = arr[c];
        printf("vincitore della prova %d: %s con %d punti\n", k + 1, winner.nome, winner.punteggi[k]);
    }
}
void sortArray(Partecipante arr[], int dim) {
    for(int i = 1; i < dim; i ++)
        for(int j = 0; j < i; j ++)
            if(arr[i].totale > arr[j].totale) {
                Partecipante t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
}
void printArr(Partecipante arr[], int dim) {
    for(int k = 0; k < dim; k ++) {
        if (k < 10)
            printf("0");
        printf("%d %s con %d punti totali\n", k + 1, arr[k].nome, arr[k].totale);
    }

}

int main() {
    int dim = leggiDim();
    Partecipante arr[dim];

    for(int k = 0; k < dim; k ++) {
        printf("partecipante %d:\n", k + 1);
        arr[k] = createPartecipante();
    }
    visOgniProva(arr, dim);
    sortArray(arr, dim);
    printf("\ncassifica:\n");
    printArr(arr, dim);

    return 0;
}
