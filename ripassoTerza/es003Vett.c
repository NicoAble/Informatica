#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 4

void caricaVett(int vett[], int dim){
    for(int x=0; x<dim; x++){
        printf("inserire il %d numero: ", x);
        scanf("%d", &vett[x]);
    }
    return;
}

void scambio(float *n1, float *n2){
}

void bubbleSort1(float vett[], float n, float max, float min){
     int k, sup;

     for(sup=n-1; sup>0; sup--){
        if(vett[k]>vett[k+1]){
            scambio(&vett[k], &vett[k+1]);
        }
     }
}

void leggiVett(int vett[], int dim){
    for(int x=0; x<dim; x++){
        printf("\n%d", vett[x]);
    }
    printf("\n");
    return;
}

main() {
    int A[LUNG], c1=0, c2=0;
    int pari[LUNG];
    int dispari[LUNG];
    caricaVett(A, LUNG);
    pariDispari(A, LUNG, pari, dispari, &c1, &c2);
    leggiVett(pari, c1);
    leggiVett(dispari, c2);
    return 0;
}
