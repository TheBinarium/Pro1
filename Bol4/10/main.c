#include <stdio.h>
#define N 10
#define M 20

void recibirArrays(int arrayA[N], int arrayB[N]);
void intercambiar(int *x, int *y);
int particion(int array[M], int izquierda, int derecha);
void ordenarArray(int array[M], int izquierda, int derecha);
void juntarArrays(const int arrayA[N], const int arrayB[N], int arrayC[M]);
void imprimirArray(const int array[M]);


int main() {
    int a[N]={0}, b[N]={0}, c[M]={0};
    recibirArrays(a, b);
    juntarArrays(a, b, c);
    ordenarArray(c, 0, M-1);
    imprimirArray(c);
    return 0;
}

void recibirArrays(int arrayA[N], int arrayB[N]){
    printf("\nIntroduzca un primer vector de 50 elementos: ");
    for(int i=0; i<N; i++){
        scanf("%d", &arrayA[i]);
    }
    printf("\nIntroduzca un segundo vector de 50 elementos: ");
    for(int i=0; i<N; i++){
        scanf("%d", &arrayB[i]);
    }
}

void intercambiar(int *x, int *y){
    int temporal=*x;
    *x=*y;
    *y=temporal;
}

void ordenarArray(int array[M], int izquierda, int derecha){
    if(izquierda<derecha) {
        int indiceParticion = particion(array, izquierda, derecha);
        ordenarArray(array, izquierda, indiceParticion);
        ordenarArray(array, indiceParticion + 1, derecha);
    }
}

int particion(int array[M], int izquierda, int derecha){
    int pivote = array[izquierda];
    while(1){
        while (array[izquierda]>pivote) izquierda++;
        while (array[derecha]<pivote) derecha--;
        if(izquierda>=derecha) return derecha;
        else{
            intercambiar(&array[izquierda], &array[derecha]);
            derecha--;
            izquierda++;
        }
    }
}

void juntarArrays(const int arrayA[N], const int arrayB[N], int arrayC[M]){
    int indice=0;
    for(int i=0; i<N; i++) arrayC[indice++]=arrayA[i];
    for(int j=0; j<M; j++) arrayC[indice++]=arrayB[j];
}

void imprimirArray(const int array[M]){
    printf("\nLos elementos de ambos arrays ordenados son: ");
    for(int i=0; i<M; i++) printf("%d ", array[i]);
    printf("\n");
}
