#include <stdio.h>

#define N 5

void construirMatriz(int matriz[N][N]);
void buscarMaxMin(const int matriz[N][N], int *max, int *min, int posmax[2], int posmin[2]);
void mostrar(const int matriz[N][N], int max, int min, const int posmax[2], const int posmin[2]);

int main() {
    int a[N][N], max, min, posmax[2]={0,0}, posmin[2]={0,0};
    construirMatriz(a);
    buscarMaxMin(a, &max, &min, posmax, posmin);
    mostrar(a, max, min, posmax, posmin);
    return 0;
}

void construirMatriz(int matriz[N][N]){
    printf("\nIntroduzca una matriz de enteros %dx%d:\n", N, N);
    for(int i=0; i<N; ++i){
        printf("\n\tFila %d:", i+1);
        for(int j=0; j<N; ++j) scanf("%d", &matriz[i][j]);
    }
}

void buscarMaxMin(const int matriz[N][N], int *max, int *min, int posmax[2], int posmin[2]){
    posmin[0]=0;
    *max=matriz[0][0];
    *min=matriz[0][0];
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(matriz[i][j]>*max){
                *max=matriz[i][j];
                posmax[0]=i;
                posmax[1]=j;
            }
            else if(matriz[i][j]<*min){
                *min=matriz[i][j];
                posmin[0]=i;
                posmin[1]=j;
            }
        }
    }
}

void mostrar(const int matriz[N][N], int max, int min, const int posmax[2], const int posmin[2]){
    printf("\nLa matriz introducida:\n\t");
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            printf("%d ", matriz[i][j]);
        }
        printf("\n\t");
    }
    printf("\nElemento mayor: %d", max);
    printf("\nPosicion del elemento mayor: fila %d, columna %d\n", posmax[0]+1, posmax[1]+1);
    printf("\nElemento menor: %d", min);
    printf("\nPosicion del elemento menor: fila %d, columna %d\n", posmin[0]+1, posmin[1]+1);
}
