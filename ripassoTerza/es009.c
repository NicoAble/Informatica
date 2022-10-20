#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>

int leggiControlla() {
    int n1;
    do {
        printf("inserire un numero: ");
        scanf("%d", &n1);
    } while(n1<0);
    return n1;
}

void INVERTI(int *z) {
    int y=*z;
    int x=0;
    int resto;
    while(y>0) {
        resto=y%10;
        x=x*10+resto;
        y=(y-resto)/10;
    }
    *z=x;
}


main() {
    int x;
    x=leggiControlla();
    INVERTI(&x);
    printf("%d", x);

    return 0;
}
