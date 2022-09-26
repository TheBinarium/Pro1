#include <stdio.h>

#define N 15

void leerArray(char array[N]);
int suma(const char array1[N], const char array2[N], int pos, int *acarreo);
void printArray(int array[]);

int main() {
    char sumando1[N], sumando2[N];
    int acarreo=0, resultado[N+1]={0};
    printf("\n/Programa que realiza la suma de dos numeros de %d cifras/\n", N);
    leerArray(sumando1);
    leerArray(sumando2);

    for(int i=N-1;i>=0;--i){
        resultado[i+1]=suma(sumando1, sumando2, i, &acarreo);
    }
    resultado[0]=acarreo;
    printArray(resultado);
    return 0;
}

void leerArray(char array[N]){
    printf("\nIntroduce un numero de %d cifras (Separadas por espacios):", N);
    for(int i=0;i<N;++i) scanf(" %c", &array[i]);
}

int suma(const char array1[N], const char array2[N], int pos, int *acarreo){
    int aux;
    aux=((int)array1[pos]-48)+((int)array2[pos]-48)+*acarreo;
    *acarreo=aux/10;
    return (aux%10);
}

void printArray(int array[]){
    printf("\nEl resultado de la suma es: ");
    if(array[0]!=0) printf("%d", array[N]);
    for(int i=1;i<N+1;++i){
        printf("%d", array[i]);
    }
    printf("\n");
}
