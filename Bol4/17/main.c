#include <stdio.h>
#include <stdbool.h>

#define N 5
#define OP1 'I'
#define OP2 'S'
#define OP3 'R'
#define OP4 'P'
#define OP5 'E'

void explicarPrograma();
char opcionSeleccionada();
void mostrarMenu();
void pausa();
void gestionarPrograma();
void introducirMatrices(int matrizA[N][N], int matrizB[N][N]);
void sumaM(const int matrizA[N][N], const int matrizB[N][N], int matrizC[N][N]);
void restaM(const int matrizA[N][N], const int matrizB[N][N], int matrizC[N][N]);
void prodM(const int matrizA[N][N], const int matrizB[N][N], int matrizC[N][N]);

int main() {
    explicarPrograma();
    gestionarPrograma();
    return 0;
}

void explicarPrograma(){
    puts("\nEste programa permite, a partir de un menu iterativo, introducir un par de matrices\n"
         "cuadradas y realizar operaciones basicas entre ellas siempre que sea posible:"
         "\n\tLa opcion I) permite introducir 2 nuevas matrices a operar."
         "\n\tLa opcion S) permite realizar una suma de matrices."
         "\n\tLa opcion R) permite realizar una resta de matrices."
         "\n\tLa opcion P) permite realizar una multiplicacion de matrices."
         "\n\tLa opcion E) permite acabar el programa.");
}

char opcionSeleccionada(){
    char opcion;
    printf("\nIntroduzca por favor una de las opciones posibles (%c, "
           "%c, %c, %c, %c): ", OP1, OP2, OP3, OP4, OP5);
    scanf("%c", &opcion);
    return opcion;
}

void mostrarMenu(){
    printf("%c) Opcion %c\n", OP1, OP1);
    printf("%c) Opcion %c\n", OP2, OP2);
    printf("%c) Opcion %c\n", OP3, OP3);
    printf("%c) Opcion %c\n", OP4, OP4);
    printf("%c) Salir\n", OP5);
}

void pausar() {
    printf("\nPulse la tecla ENTER para continuar...\n");
    getchar();
}


void gestionarPrograma(){
    int a[N][N]={0}, b[N][N]={0}, c[N][N]={0};
    bool seguir=true;
    introducirMatrices(a, b);
    getchar();
    do {
        //mostrarMenu();
        switch (opcionSeleccionada()) {
            case OP1:
                printf("\nHa elegido la opcion %c)", OP1);
                introducirMatrices(a, b);
                getchar();
                break;
            case OP2:
                printf("\nHa elegido la opcion %c)", OP2);
                sumaM(a, b, c);
                getchar();
                break;
            case OP3:
                printf("\nHa elegido la opcion %c)", OP3);
                restaM(a, b, c);
                getchar();
                break;
            case OP4:
                printf("\nHa elegido la opcion %c)", OP4);
                prodM(a, b, c);
                getchar();
                break;
            case OP5:
                seguir=false;
                printf("\nHa elegido la opcion %c)", OP5);
                printf("\nFIN DEL PROGRAMA\n");
                break;
            default:
                printf("\nERROR, opcion no valida (Elija una de las siguientes:"
                       "%c, %c, %c, %c, %c)\n", OP1, OP2, OP3, OP4, OP5);
                getchar();
        }
    }while (seguir==true);
}

void introducirMatrices(int matrizA[N][N], int matrizB[N][N]){
    int i, j;
    printf("\nIntroduzca la matriz A de enteros de dimensiones %dx%d:", N, N);
    for(i=0;i<N;++i){
        printf("\n\tFila %d:", i+1);
        for(j=0;j<N;++j) scanf("%d", &matrizA[i][j]);
    }
    printf("\nIntroduzca la matriz B de enteros %dx%d:", N, N);
    for(i=0;i<N;++i){
        printf("\n\tFila %d:", i+1);
        for(j=0;j<N;++j) scanf("%d", &matrizB[i][j]);
    }
}

void sumaM(const int matrizA[N][N], const int matrizB[N][N], int matrizC[N][N]){
    printf("\nMatriz resultado de la suma:\n");
    for(int i=0;i<N;++i) {
        for (int j = 0; j < N; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%4d", matrizC[i][j]);
        }
        printf("\n");
    }
}

void restaM(const int matrizA[N][N], const int matrizB[N][N], int matrizC[N][N]){
    printf("\nMatriz resultado de la resta de la matriz A menos la B:\n");
    for(int i=0;i<N;++i) {
        for (int j = 0; j < N; ++j) {
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
            printf("%4d", matrizC[i][j]);
        }
        printf("\n");
    }
}

void prodM(const int matrizA[N][N], const int matrizB[N][N], int matrizC[N][N]){
    printf("\nMatriz resultado del producto de A por B (no conmutativa):\n");
    for(int i=0;i<N;++i) {
        for (int j = 0; j < N; ++j) {
            matrizC[i][j] += (matrizA[i][j] * matrizB[j][i]);
            printf("%4d", matrizC[i][j]);
        }
        printf("\n");
    }
}
