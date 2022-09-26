#include <stdio.h>

#define N 5

void recibirMatriz(int matrizA[N][N], int matrizB[N][N]);
void intercambiar(int *a, int *b);
void solicitud(int matriz[N][N]);
void mostrarMatrices(const int matrizA[N][N], const int matrizB[N][N]);

int main() {
    int a[N][N]={0}, original[N][N]={0};
    recibirMatriz(a, original);
    solicitud(a);
    mostrarMatrices(a, original);
    return 0;
}

void recibirMatriz(int matrizA[N][N], int matrizB[N][N]){
    printf("\nIntroduce una matriz de dimensiones %dx%d:\n", N, N);
    for(int i=0;i<N; ++i){
        printf("\tFila %d:", i+1);
        for(int j=0;j<N; ++j){
            scanf("%d", &matrizA[i][j]);
            matrizB[i][j]=matrizA[i][j];
        }
        puts("");
    }
}

void intercambiar(int *a, int *b){
    int temporal=*a;
    *a=*b;
    *b=temporal;
}

void solicitud(int matriz[N][N]){
    char ch='A';
    int columna[2], fila[2];
    while (ch!='C'&&ch!='F'){
        printf("\nQue quiere intercambiar? (C=columnas)(F=filas):");
        scanf("%c", &ch);
    }
    if(ch=='C'){
        printf("\nQue columnas desea intercambiar:");
        scanf("%d", &columna[0]);
        printf("...y...");
        scanf("%d", &columna[1]);
        for(int f=0;f<N;++f){
            intercambiar(&matriz[f][columna[0]-1], &matriz[f][columna[1]-1]);
        }
    }
    if(ch=='F'){
        printf("\nQue filas desea intercambiar:");
        scanf("%d", &fila[0]);
        printf("...y...");
        scanf("%d", &fila[1]);
        for(int c=0;c<N;++c){
            intercambiar(&matriz[fila[0]-1][c], &matriz[fila[1]-1][c]);
        }
    }
}

void mostrarMatrices(const int matrizA[N][N], const int matrizB[N][N]){
    printf("\nLa matriz original es:\n");
    for(int i=0;i<N; ++i){
        for(int j=0;j<N; ++j){
            printf(" %d", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\nLa matriz tras modificaciones es:\n");
    for(int i=0;i<N; ++i){
        for(int j=0;j<N; ++j){
            printf(" %d", matrizA[i][j]);
        }
        printf("\n");
    }
}
