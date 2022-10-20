#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define L_STR 20

typedef char String[L_STR];

typedef struct {
    String nome;
    int golFatti;
    int golSubiti;
} Squadra;

int leggiNumNotNeg(String s) {
    int n;
    do {
        printf("%s", s);
        scanf("%d", &n);
    } while(n < 0);

    return n;
}
void setSquadra(Squadra* s) {
    printf("nome squadra: ");
    scanf("%s", s->nome);
    s->golFatti = leggiNumNotNeg("gol fatti: ");
    s->golSubiti = leggiNumNotNeg("gol subiti: ");
    printf("\n");
}
void printSquadreGolFatti(Squadra arr[], int dim) {
    printf("Squadre con più gol fatti che subiti:\n");
    for(int k = 0; k < dim; k ++)
        if(arr[k].golFatti > arr[k].golSubiti)
            printf(">>> %s\n", arr[k].nome);
}
void stampaGol(Squadra arr[], int dim) {
    String s;
    printf("squadra: ");
    scanf("%s", s);

    bool trovato = false;
    int k = 0;
    while(k < dim && !trovato) {
        if(!strcmp(s, arr[k].nome)) {
            printf("gol fatti: %d, gol subiti: %d\n", arr[k].golFatti, arr[k].golSubiti);
            trovato = true;
        }
        k ++;
    }

    if(!trovato)
        printf("nessuna squadra trovata\n");
}

int main() {
    int dim = leggiNumNotNeg("Inserisci il numero delle squadre: ");
    Squadra campionato[dim];

    for(int k = 0; k < dim; k ++) {
        printf("squadra %d:\n", k + 1);
        setSquadra(&campionato[k]);
    }

    printf("\n");
    printSquadreGolFatti(campionato, dim);
    printf("\n");
    stampaGol(campionato, dim);

    return 0;
}
