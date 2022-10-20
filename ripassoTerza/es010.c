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

void CRESCENTI(int *x, int *y, int *z) {
       int min, magg, rim;
       if(*x > *y){
        if(*y > *z){
            min = *z;
            magg = *x;
            rim = *y;
        }else if(*x > *z){
            min = *y;
            magg = *x;
            rim = *z;
        }else{
            magg = *z;
            rim = *x;
            min = *y;
        }
    }else{
        if(*x > *z){
            min = *z;
            rim = *x;
            magg = *y;
        }else{
            min = *x;
            rim = *y;
            magg = *z;
        }
    }
        magg = *z;
        if(*x > *y){
            min = *y;
            rim = *z;
        }else{
            min = *y;
            rim = *x;
        }
        printf("\n%d %d %d", magg, rim, min);
    }

main() {
    int x, y, z;
    x=leggiControlla();
    y=leggiControlla();
    z=leggiControlla();
    CRESCENTI(&x, &y, &z);
    return 0;
}
