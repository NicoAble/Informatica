/*22. Dato un file di testo "numeri.dat" contenente dei numeri reali, leggerli e infine salvare
nel file "risultati.dat" il valore medio. Attenzione il file può non esistere o essere vuoto
23. Aggiungere al file precedente "risultati.dat" il valore massimo tra i numeri*/

#include <stdio.h>

#define LUNG 20

void leggiMatdaFile(float vett[], FILE* fp, int *c) {
    while(fscanf(fp, "%f ", &vett[*c])!=EOF){
        fscanf(fp, "%f ", &vett[*c]);
        (*c)++;
    }
}

float numeroMedio(float v[], int c){
    float m=0;
    for(int x=0; x<c; x++){
        m+=v[x];
    }
    m=m/(float)c;
    return m;
}

float numeroMax(float v[], int c){
    float m=0;
    for(int x=0; x<c; x++){
        if(v[x]>m)
            m=v[x];
    }
    return m;
}



int main() {
    float vett[LUNG];
    int count=0;
    float n, max;

    FILE* fp = fopen("numeri.dat", "r");
    FILE* fout = fopen("risultati.dat", "a");
    if(fp != NULL) {
        leggiMatdaFile(vett, fp, &count);
        n=numeroMedio(vett, count);
        max=numeroMax(vett, count);
        fprintf(fout, "numero medio: %.2f\nnumero massimo: %.2f", n, max);
    } else
        printf("file non trovato\n");
    fclose(fp);

    return 0;
}
