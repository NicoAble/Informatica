#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 5

void caricaVett(int vett[], int dim){
    for(int x=0; x<dim; x++){
        printf("inserire il %d numero: ", x);
        scanf("%d", &vett[x]);
    }
    return;
}

void somme(int vett[], int dim, int *sp, int *sd){
    for(int x=0; x<dim; x++){
        if(x%2==0){
            *sp+=vett[x];
        }else{
            *sd+=vett[x];
        }
    }
    return;
}

main() {
    int sommaPari=0, sommaDispari=0;
    int v[LUNG];
    caricaVett(v, LUNG);
    somme(v, LUNG, &sommaPari, &sommaDispari);
    printf("somma pari: %d, somma dispari: %d", sommaPari, sommaDispari);
    return 0;
}
