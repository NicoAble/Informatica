#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

float leggiControlla() {
    float n1;
    do {
        printf("inserire un numero: ");
        scanf("%f", &n1);
    } while(n1<0);
    return n1;
}

void POT2(float *y){
     *y=(*y)*(*y);
     return;
}


main() {
    float x;
    x=leggiControlla();
    POT2(&x);
    printf("\n%.2f", x);

    return 0;
}
