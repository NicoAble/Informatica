#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int leggiControlla() {
    int x;
    do {
        printf("inserire quante volte si vuole stampare il carattere: ");
        scanf("%d", &x);
    } while(x<0);
    return x;
}

void leggiCarattere(char * c) {
    fflush(stdin);
    scanf("%c", c);
}

void stampaNvolte(char c, int n) {
    for(int x=0; x<n; x++) {
        printf("%c ", c);
    }
}

void stampaTriangolo(char c, int n) {
    for(int x=0; x<n; x++) {
        printf("\n");
        stampaNvolte(c, x+1);
    }
}


main() {
    int N;
    char C;

    N=leggiControlla();

    printf("\ninserire il carattere: ");
    leggiCarattere(&C);

    stampaTriangolo(C, N);

    return 0;
}
