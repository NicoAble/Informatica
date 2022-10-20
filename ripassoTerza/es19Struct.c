#include <stdio.h>

#define L_STR 20
#define N_GIORNI_SETT 7
#define PERC_CALO 10

typedef char String[L_STR];

typedef struct {
    String nome;
    float valori[N_GIORNI_SETT];
} Azione;

float leggiNumFloat(int k) {
    float n;

    do {
        printf("valore nel giorno %d: ", k);
        scanf("%f", &n);
    } while(n <= 0);

    return n;
}
int leggiNumInt() {
    int n;

    do {
        printf("inserisci la dimensione: ");
        scanf("%d", &n);
    } while(n < 0);

    return n;
}
