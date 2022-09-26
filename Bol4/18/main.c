#include <stdio.h>
#include <stdbool.h>

#define N 5

void recibirMatriz(int matrizA[N][N]);
void escribirMatriz(int matrizA[N][N]);
bool esPdS(int matrizA[N][N], int fila, int columna);

int main() {
    int a[N][N], posFila, posColumna, cont=0;
    recibirMatriz(a);
    escribirMatriz(a);
    for(posFila=0;posFila<N;++posFila){
        for(posColumna=0;posColumna<N;++posColumna){
            if(esPdS(a, posFila, posColumna)==true){
                printf("\nTiene punto de silla en la posicion %d-%d"
                       " (Valor: %d)\n", posFila+1, posColumna+1, a[posFila][posColumna]);
                cont+=1;
            }
        }
    }
    if(cont==0) printf("La matriz no tiene ningun punto de silla\n");
    return 0;
}

void recibirMatriz(int matrizA[N][N]){
    printf("\nPrograma que comprueba si una matriz cuadrada de orden %d"
           " contiene algun elemento\npunto de silla (Menor valor de su fila y"
           " mayor valor de su columna)\n", N);
    printf("\nIntroduce una matriz de enteros de dimensiones %dx%d:", N, N);
    for(int i=0;i<N; ++i){
        printf("\n\tFila %d:", i+1);
        for(int j=0;j<N; ++j){
            scanf("%d", &matrizA[i][j]);
        }
    }
}

void escribirMatriz(int matrizA[N][N]){
    printf("\nLa matriz escogida:\n");
    for(int i=0;i<N;++i){
        printf("\t");
        for(int j=0;j<N;++j)
            printf("%4d", matrizA[i][j]);
        printf("\n");
    }
}

bool esPdS(int matrizA[N][N], int fila, int columna){
    bool condicion=true;
    for(int i=0;i<N && condicion==true; ++i){
        for(int j=0;j<N && condicion==true; ++j){
            if(matrizA[fila][columna]>matrizA[fila][j] || matrizA[fila][columna]<matrizA[i][columna]) {
                condicion=false;
            }
        }
    }
    return condicion;
}
