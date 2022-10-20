#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 20
#define MAX 126
#define MIN 32

int chiedi(int lung){
    int n;
    do {
        printf("inserire quanti caratteri casuali stampare: ");
        scanf("%d", &n);

    } while(n<0 || n>lung);
    return n;
}



void numeriCasuali(char vett[], int dim){
    srand(time(NULL));
    int quanti=MAX-MIN+1;
    for(int x=0; x<dim; x++){
        vett[x]=rand()%quanti+MIN;
    }
    vett[dim]='\0';
}

main() {
    char A[LUNG];
    int x;

    x=chiedi(LUNG-1);


    numeriCasuali(A, x);

    printf("%s", A);
    return 0;
}
