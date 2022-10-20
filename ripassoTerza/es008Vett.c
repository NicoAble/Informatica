#include <string.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#define LUNG 10
#define MAX 126
#define MIN 32

void chiedi(char vett[]){
        printf("inserire una parola: ");
        gets(vett);
}

bool VocaliDispari(char vett[]){
    int count=0;
    for(int x=0; x<LUNG; x++){
    if(vett[x]=='a' || vett[x]=='A' || vett[x]=='e' || vett[x]=='E' || vett[x]=='i' || vett[x]=='I' || vett[x]=='o' || vett[x]=='O' || vett[x]=='u' || vett[x]=='U'){
                count++;
        }
    }
    if(count%2!=0){
        return true;
    }else{
        return false;
    }
}

void controlla(bool a){
    if(a==true){
        printf("vocali dispari");
    }else{
        printf("vocali pari");
    }
}

main() {
    char A[LUNG];
    bool risp;

    chiedi(A);

    risp= VocaliDispari(A);

    controlla(risp);
    return 0;
}
