#include <stdio.h>

#define N 5

void recibirMatriz(float matrizA[N][N], float matrizB[N][N]);
void trasponer(float matrizA[N][N], float matrizB[N][N]);
void mostrarMatrices(const float matrizA[N][N], const float matrizB[N][N]);

int main() {
    float a[N][N]={0}, copia[N][N]={0};
    recibirMatriz(a, copia);
    trasponer(a, copia);
    mostrarMatrices(a, copia);
    return 0;
}

void recibirMatriz(float matrizA[N][N], float matrizB[N][N]){
    printf("\nIntroduce una matriz de reales de dimensiones %dx%d:\n", N, N);
    for(int i=0;i<N; ++i){
        printf("\tFila %d:", i+1);
        for(int j=0;j<N; ++j){
            scanf("%f", &matrizA[i][j]);
            matrizB[i][j]=matrizA[i][j];
        }
        puts("");
    }
}

void trasponer(float matrizA[N][N], float matrizB[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrizA[i][j] = matrizB[j][i];
        }
    }
}

void mostrarMatrices(const float matrizA[N][N], const float matrizB[N][N]){
    printf("\nLa matriz original es:\n");
    for(int i=0;i<N; ++i){
        for(int j=0;j<N; ++j){
            printf("%4.2f", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\nLa matriz tras modificaciones es:\n");
    for(int i=0;i<N; ++i){
        for(int j=0;j<N; ++j){
            printf("%4.2f", matrizA[i][j]);
        }
        printf("\n");
    }
}
