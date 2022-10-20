#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 10
#define MAX 126
#define MIN 32

void chiedi(char vett[]){
        printf("inserire una parola: ");
        gets(vett);
}

void isMinMa(char vett[]){
    for(int x=0; x<LUNG; x++){
        if(vett[x]>=65 && vett[x]<=90){
            vett[x]+=32;
        }else if(vett[x]>=97 && vett[x]<=122){
            vett[x]-=32;
        }
    }
}

main() {
    char A[LUNG];

    chiedi(A);
    isMinMa(A);

    printf("%s", A);
    return 0;
}
