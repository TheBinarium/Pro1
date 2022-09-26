#include <stdio.h>
#define N 30
#define M 60

void recibirArrays(float arrayA[N],float arrayB[N]);
void intercambiar(float *x, float *y);
int particion(float array[M], int izquierda, int derecha);
void ordenarArray(float array[M], int izquierda, int derecha);
void juntarArrays(const float arrayA[N], const float arrayB[N], float arrayC[M]);
void imprimirArray(const float array[M]);


int main() {
    float a[N]={0}, b[N]={0}, c[M]={0};
    recibirArrays(a, b);
    juntarArrays(a, b, c);
    ordenarArray(c, 0, M-1);
    imprimirArray(c);
    return 0;
}

void recibirArrays(float arrayA[N], float arrayB[N]){
    printf("\nIntroduzca un primer vector de %d numeros reales: ", N);
    for(int i=0; i<N; i++){
        scanf("%f", &arrayA[i]);
    }
    printf("\nIntroduzca un segundo vector de %d numeros reales: ", N);
    for(int i=0; i<N; i++){
        scanf("%f", &arrayB[i]);
    }
}

void intercambiar(float *x, float *y){
    float temporal=*x;
    *x=*y;
    *y=temporal;
}

void ordenarArray(float array[M], int izquierda, int derecha){
    if(izquierda<derecha) {
        int indiceParticion = particion(array, izquierda, derecha);
        ordenarArray(array, izquierda, indiceParticion);
        ordenarArray(array, indiceParticion + 1, derecha);
    }
}

int particion(float array[M], int izquierda, int derecha){
    float pivote = array[izquierda];
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

void juntarArrays(const float arrayA[N], const float arrayB[N], float arrayC[M]){
    int indice=0;
    for(int i=0; i<N; i++) arrayC[indice++]=arrayA[i];
    for(int j=0; j<M; j++) arrayC[indice++]=arrayB[j];
}

void imprimirArray(const float array[M]){
    printf("\nLos elementos de ambos arrays ordenados son: ");
    for(int i=0; i<M; i++) printf("%.2f ", array[i]);
    printf("\n");
}
