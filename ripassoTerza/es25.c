/*
Leggere un file di testo "testo.txt" carattere per carattere, contare le parole presenti
caricando ogni parola in un vettore di stringhe (supporre che non ci siano più di 100
parole di lunghezza massima 20)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 15
#define LUNG 20

typedef struct{
    char nome[LUNG];
    char cognome[LUNG];
    int t;
}Tempo;

void leggiDaFile(FILE* fp, Tempo s[], int *c){
    *c =0;
    while(fscanf(fp, "%s %s %d", s[*c].nome, s[*c].cognome, &s[*c].t)!=EOF){
        (*c)++;
    }
return;

}

void stampaMaggiore(Tempo s[], int c){
    int x=0;
    int min=s[x].t;
    for(x=0; x<c; x++){
    if(s[x].t<min)
        min=s[x].t;
    }
    for(int j=0; j<c; j++){
        if(min==s[j].t)
            printf("il piu' forte e' %s %s", s[j].nome, s[j].cognome);
    }
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    Tempo p[MAX];
    int count=0;

    fp = fopen("GARE.txt", "r");
    if(fp!=NULL){
            leggiDaFile(fp, p, &count);
            stampaMaggiore(p, count);

    }


    fclose(fp);
    return 0;
}
