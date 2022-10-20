#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>

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

float IPOTENUSA(float c1, float c2){
        float y;
        POT2(&c1);
        POT2(&c2);
        y=sqrt(c1+c2);
        return y;
}


main() {
    float c1, c2, i;
    c1=leggiControlla();
    c2=leggiControlla();
    i=IPOTENUSA(c1, c2);
    printf("\n%.2f", i);

    return 0;
}
