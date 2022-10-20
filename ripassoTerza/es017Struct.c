#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#define LUNG 20
#define NSQUADRE 3

typedef char Stringa[LUNG];

typedef struct squadra {
    Stringa nome;
    int gf;
    int gs;
} Squadra;

void visualizzaSquadraTramiteNome(Squadra squadra[], int n) {
    Stringa nomeDaCercare;
    printf("inserisci nome della squadra: ");
    fflush(stdin);
    gets(nomeDaCercare);
    bool trovato=false;
    int k=0;
    while(trovato==false && k<n) {
        if(strcmp(nomeDaCercare,squadra[k].nome)==0) {
            printf("\n\ngol fatti : %d \n", squadra[k].gf);
            printf("\n\ngol subiti : %d \n", squadra[k].gs);
            trovato=true;
        }
        k++;
    }
    if(trovato==false) {
        printf("non trovata");
    }
}

void visualizzaGolMaggiore(Squadra squadra[], int n) {
    for(int k = 0; k < n; k++) {
        if(squadra[k].gf>squadra[k].gs) {
            printf("\n\nNome : %s \n", squadra[k].nome);
        }
    }
}

void memorizza(Squadra squadra[],int n) {
    for(int k=0; k<n; k++) {
        printf("inserisci nome della squadra: ");
        fflush(stdin);
        gets(squadra[k].nome);
        printf("inserisci gol fatti: ");
        scanf("%d",&squadra[k].gf);
        printf("inserisci gol subiti: ");
        scanf("%d",&squadra[k].gs);
    }
}

int main() {
    Squadra campionato[NSQUADRE];
    memorizza(campionato,NSQUADRE);
    visualizzaGolMaggiore(campionato,NSQUADRE);
    visualizzaSquadraTramiteNome(campionato,NSQUADRE);
}
