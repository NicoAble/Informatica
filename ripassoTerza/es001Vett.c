#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 11

int leggiControlla() {
    int n1;
    do {
        printf("inserire un numero: ");
        scanf("%d", &n1);
    } while(n1<0);
    return n1;
}

void caricaVett(int vett[], int dim, int n){
    for(int x=0; x<dim; x++){
        vett[x]=x*n;
    }
    return;
}

void leggiVett(int vett[], int dim){
    for(int x=0; x<dim; x++){
        printf("\n%d", vett[x]);
    }
    return;
}

main() {
    int x;
    int v[LUNG];
    x=leggiControlla();
    caricaVett(v, LUNG, x);
    leggiVett(v, LUNG);
    return 0;
}
