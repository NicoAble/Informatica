#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

float leggiControlla() {
    float x;
    do {
        printf("inserire la misura del lato: ");
        scanf("%f", &x);
    } while(x<0);
    return x;
}

bool controllaMisure(float x1, float x2, float x3){
if((x1+x2>x3)&&(x1+x3>x2)&&(x2+x3>x1))
    return true;
else return false;
}

void isTriangolo(bool x){
    if(x==true)
        printf("si\n");
    else
        printf("no\n");
}

bool isIsoscele(float x1, float x2, float x3){
if((x1==x2)||(x1==x3)||(x2==x3))
    return true;
else return false;
}



main() {
    float n1, n2, n3;
    bool vero, iso;
    n1=leggiControlla();
    n2=leggiControlla();
    n3=leggiControlla();
    vero= controllaMisure(n1, n2, n3);
    isTriangolo(vero);
    if(vero==true){
    iso=isIsoscele(n1, n2, n3);
    }
    isTriangolo(iso);
    return 0;
}
