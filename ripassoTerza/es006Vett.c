#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LUNG 10
#define MAX 126
#define MIN 32

void chiedi(char vett[]) {
    printf("inserire una parola: ");
    gets(vett);
}

bool isVocale(char c) {
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U') {
        return true;
    }else return false;
}

void elimina(char vett[]) {
    int x;
    for( x=0; vett[x] != '\0'; x++) {
        if(isVocale(vett[x])==true) {
            for(int j=x; vett[j] != '\0'; j++) {
                vett[j]=vett[j+1];
            }
            x--;
        }
    }
    vett[x]='\0';

}


main() {
    char A[LUNG];

    chiedi(A);


    elimina(A);
    printf("\n%s", A);
    return 0;
}
