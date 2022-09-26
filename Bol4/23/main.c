#include <stdio.h>

#define N 10

void recibirArray(char arrayChar[N]);
void juntarArrays(const char arrayA[N], const char arrayB[N], char arrayC[2*N]);
void ordenarArray(char arrayChar[2*N], int izquierda, int derecha);
int partition(char arrayChar[2*N], int izquierda, int derecha);
void imprimirArray(char arrayChar[2*N]);

int main() {
    char a[N], b[N], c[2*N];
    recibirArray(a);
    recibirArray(b);
    juntarArrays(a,b,c);
    ordenarArray(c, 0, (2*N)-1);
    imprimirArray(c);
    return 0;
}

void recibirArray(char arrayChar[N]){
    printf("\nIntroduzca %d caracteres: ", N);
    for(int i=0;i<N;++i){
        scanf(" %c", &arrayChar[i]);
    }
}

void juntarArrays(const char arrayA[N], const char arrayB[N], char arrayC[2*N]){
    for(int i=0;i<N;++i) arrayC[i]=arrayA[i];
    for(int i=0;i<N;++i) arrayC[N+i]=arrayB[i];
}

void intercambiar(char *a, char *b){
    char temporal=*a;
    *a=*b;
    *b=temporal;
}

void ordenarArray(char arrayChar[2*N], int izquierda, int derecha){
    if(izquierda<derecha){
        int indicePartition=partition(arrayChar,izquierda,derecha);
        ordenarArray(arrayChar,izquierda,indicePartition);
        ordenarArray(arrayChar,indicePartition+1,derecha);
    }
}

int partition(char arrayChar[2*N], int izquierda, int derecha){
    char pivote=arrayChar[izquierda];
    while (1) {
        while (arrayChar[izquierda] < pivote) izquierda++;
        while (arrayChar[derecha] > pivote) derecha--;
        if (izquierda >= derecha) return derecha;
        else {
            intercambiar(&arrayChar[izquierda], &arrayChar[derecha]);
            izquierda++;
            derecha--;
        }
    }
}

void imprimirArray(char arrayChar[2*N]){
    printf("\nEl array ordenado resultado de los introducidos es:\n\t");
    for(int i=0;i<(2*N);++i){
        if(i==34) printf("\n\t");
        printf("%c ", arrayChar[i]);
    }
    printf("\n");
}
