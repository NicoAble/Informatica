#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int leggiControlla() {
    int x;
    do {
        printf("inserire quante volte si vuole stampare la striscia pedonale: ");
        scanf("%d", &x);
    } while(x<0);
    return x;
}


void stampaNvolte(char c, int n) {
    for(int x=0; x<n; x++) {
        printf("%c", c);
    }
}

void stampaQuadrato(char c, int n) {
    for(int x=0; x<n; x++) {
        printf("\n");
        stampaNvolte(c, n);
    }
}

void stampastrisce(int n) {
int count=0;
    for(int x=0; x<n; x++) {
        printf("\n");
        count++;
        if(count%2!=0){
        stampaQuadrato('X', 2);
        }else{
        stampaQuadrato('O', 2);
        }
    }
}


main() {
    int N;

    N=leggiControlla();

    stampastrisce(N);

    return 0;
}
