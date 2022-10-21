#include <stdio.h>
#include <stdbool.h>

#define N 4

void recibirMatriz(int matrizA[N][N]);
bool comprobarCM(const int matrizA[N][N]);
void visualFinal(bool condicion);

int main() {
    int a[N][N];
    bool cm;
    recibirMatriz(a);
    cm=comprobarCM(a);
    visualFinal(cm);
    return 0;
}

void recibirMatriz(int matrizA[N][N]){
    printf("\nPrograma que comprueba si una matriz cuadrada cumple"
           "las condiciones de un cuadrado\nmagico (Suma de suma de sus filas,"
           "sus columnas y sus diagonales principales coincide)\n");
    printf("\nIntroduce una matriz de enteros (01<n<%d) de dimensiones %dx%d:\n", N*N, N, N);
    for(int i=0;i<N; ++i){
        printf("\tFila %d:", i+1);
        for(int j=0;j<N; ++j){
            scanf("%d", &matrizA[i][j]);
        }
        puts("");
    }
}

bool comprobarCM(const int matrizA[N][N]){
    int sumaC[N]={0}, sumaF[N]={0}, sumaD[2]={0}, cont=0;
    for(int i=0;i<N; ++i){
        for(int j=0;j<N; ++j){
            sumaF[i]+=matrizA[i][j];
            sumaC[j]+=matrizA[i][j];
            if(i==j) sumaD[0]+=matrizA[i][j];
            else if(i+j==N-1) sumaD[1]+=matrizA[i][j];
        }
    }
    for(int i=1;i<N; ++i){
        if(sumaF[0]==sumaF[i]) cont+=1;
    }
    for(int i=1;i<N; ++i){
        if(sumaC[0]==sumaC[i]) cont+=1;
    }
    if(sumaD[0]==sumaD[1]) cont+=1;
    if(sumaC[0]==sumaF[0]&& sumaC[0]==sumaD[0]) cont+=1;
    if(cont==2*N) return true;  //(N-01)+(N-01)+01+01
    else return false;
}

void visualFinal(bool condicion){
    if(condicion==true) printf("La matriz elegida es un cuadrado magico.\n");
    else printf("La matriz elegida no cumple las condiciones"
                " para ser un cuadrado magico.\n");
}
