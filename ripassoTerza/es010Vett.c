#include <stdio.h>

#define N_REPARTI 3
#define N_MESI 6

void setMatFloat(int y, int x, float mat[y][x]) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("incasso reparto %d mese %d: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
        printf("\n");
    }
}
void printMatFloat(int x, int y, float mat[y][x]) {
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++)
            printf("%5.2f", mat[i][j]);
        printf("\n");
    }
}

float incTotPerMese(int y, int mese, float mat[y][mese + 1]) {
    float ret = 0;
    for(int i = 0; i < y; i ++)
        ret += mat[i][mese];
    return ret;
}
void printIcTotPerMesi(int y, int x, float mat[y][x]) {
    printf("Incasso totale di ogni mese:\n");
    for(int k = 0; k < x; k ++)
        printf("mese %d: %.2f\n", k + 1, incTotPerMese(y, k, mat));
}
float incTotPerRep(int start, int end, float arr[]) {
    float ret = 0;
    for(int k = start; k < end; k ++)
        ret += arr[k];
    return ret;
}
void printTotPerRep(int y, int x, float mat[y][x], int start, int end) {
    printf("Incasso totale di ogni reparto dal mese %d al mese %d:\n", start + 1, end);
    for(int k = 0; k < y; k ++)
        printf("reparto %d: %.2f\n", k + 1, incTotPerRep(start, end, mat[k]));
}
void richiediMesi(int* m1, int* m2, int max) {
    do {
        printf("mese iniziale: ");
        scanf("%d", m1);
    } while(*m1 <= 0 || *m1 > max);
    do {
        printf("mese finale: ");
        scanf("%d", m2);
    } while(*m2 <= 0 || *m2 > max);
}

int main() {
    float mat[N_REPARTI][N_MESI];
    int az, mese1, mese2;

    do {
        do {
            printf("0 -> esci;\n"
                   "1 -> set matrice;\n"
                   "2 -> incasso totale per mese;\n"
                   "3 -> incasso totale per reparto;\n"
                   "4 -> incasso totale per reparto in un periodo considerato.\n"
                   "azione: ");
            scanf("%d", &az);
        } while(az < 0 || az > 4);

        printf("\n");
        switch (az) {
            case 1:
                setMatFloat(N_REPARTI, N_MESI, mat);
                printMatFloat(N_REPARTI, N_MESI, mat);
                break;
            case 2:
                printIcTotPerMesi(N_REPARTI, N_MESI, mat);
                break;
            case 3:
                printTotPerRep(N_REPARTI, N_MESI, mat, 0, N_MESI);
                break;
            case 4:
                richiediMesi(&mese1, &mese2, N_MESI);
                if(mese1 > mese2)
                    printf("Errore!! Il mese iniziale è dopo il mese finale\n");
                else
                    printTotPerRep(N_REPARTI, N_MESI, mat, mese1 - 1, mese2);
                break;
        }
        printf("\n");

    } while(az != 0);

    setMatFloat(N_REPARTI, N_MESI, mat);

    return 0;
}
