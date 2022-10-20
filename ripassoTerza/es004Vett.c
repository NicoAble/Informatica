#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 4

void caricaVett(int vett[], int dim) {
    for(int x=0; x<dim; x++) {
        printf("inserire il %d numero: ", x);
        scanf("%d", &vett[x]);
    }
    return;
}

void leggiVett(float vett[], int dim) {
    for(int x=0; x<dim; x++) {
        printf("\n%.2f", vett[x]);
    }
    printf("\n");
    return;
}

void MassimoMinimo(float vett[], int dim, float *min, float *max) {
    int x=0;
    (*min)=  vett[x];

    for(x=0; x<dim; x++) {
        if(vett[x]>(*max)) {
            (*max)=vett[x];
        } else if(vett[x]<(*min)) {
            (*min)=vett[x];
        }
    }
}
void scambio(float *x, float*y){
    float f;
    f= (*x);
    *x=*y;
    *y=f;
}


void ordinamento(float vett[], int n) {
    int k, sup;
    for (sup = n-1; sup > 0; sup--) {
        for (k = 0; k < sup ; k++) {
            if (vett[k] < vett[k+1])
                scambio( &vett[k],&vett[k+1]);
        }
    }
}

void controllo(float vett[], int dim, float min, float max){
    if(vett[0]==max && vett[dim]==min){
        printf("si: %.2f %.2f", max, min);
    }else{
        printf("no");
    }
}

main() {
    float A[LUNG];
    float max=0;
    float min;

    caricaVett(A, LUNG);
    MassimoMinimo(A, LUNG, &min, &max);
    ordinamento(A, LUNG);
    leggiVett(A, LUNG);
    controllo(A, LUNG, min, max);
    return 0;
}
