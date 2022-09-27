#include <stdio.h>
#include <math.h>
#define N 20

int construirArray(int arrayA[N], int arrayB[N]);
void sustituirPares(int arrayB[N], int x);
void sustituirImpares(int arrayB[N], int x);
void mostrarArrays(int arrayA[N], int arrayB[N], int x);

int main() {
    int pre[N]={0}, pos[N]={0}, len;
    len=construirArray(pre, pos);
    sustituirPares(pos, N);
    sustituirImpares(pos, N);
    mostrarArrays(pre, pos, len);
    return 0;
}

int construirArray(int arrayA[N], int arrayB[N]){
    int i;
    printf("\nIntroduzca un conjunto de enteros (max. 20), separados por espacios"
           " y pulse 'C' para \ncontinuar (O escriba el max. de elementos): ");
    for(i=0; i<N && arrayA[i-1]!='C'; i++){
        scanf("%d", &arrayA[i]);
        arrayB[i]=arrayA[i];
    }
    return i;
}

void sustituirPares(int arrayB[N], int x){
    for (int i=0; i<x; i++) {
        if(arrayB[i]%2==0) arrayB[i]*=arrayB[i];
    }
}

void sustituirImpares(int arrayB[N], int x){
    for (int i=0; i<x; i++) {
        if((arrayB[i]-1)%2==0) arrayB[i]=sqrt(arrayB[i]);
    }
}

void mostrarArrays(int arrayA[N], int arrayB[N], int x){
    printf("\nArray introducido:\n\t");
    for (int i=0; i<x && arrayA[i]!=0; ++i) {
        printf("%d ", arrayA[i]);
    }
    printf("\nArray tras modificaciones:\n\t");
    for (int i=0; i<x && arrayA[i]!=0; ++i) {
        printf("%d ", arrayB[i]);
    }
    puts("");
}
