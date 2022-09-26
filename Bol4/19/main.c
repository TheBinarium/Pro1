#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100


void genNumAleat(int vectA[N]);
void mostrarNumAleat(int vectA[N]);
void intercambiar(int *a, int *b);
int particion(int arreglo[], int izquierda, int derecha);
void quicksort(int arreglo[], int izquierda, int derecha);
void mostrarNumOrd(const int vectB[N]);



int main() {
    int a[N];
    genNumAleat(a);
    mostrarNumAleat(a);
    quicksort(a, 0, N-1);
    mostrarNumOrd(a);
    return 0;
}



void genNumAleat(int vectA[N]) {
    srand(time(0));
    for (int i=0; i<N; i++) {
        vectA[i] = rand() % N;
    }
}

void mostrarNumAleat(int vectA[N]){
    int i;
    printf ("\nEl vector de de numeros aleatorios de 0 a %d y misma longitud es:", N);
    for (i=0; i<N; i++)
        printf (" %d", vectA[i]);
    printf ("\n");
}

void intercambiar(int *a, int *b) {
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

int particion(int arreglo[], int izquierda, int derecha) {
    int pivote = arreglo[izquierda];
    while (1) {
        while (arreglo[izquierda] < pivote) {
            izquierda++;
        }
        while (arreglo[derecha] > pivote) {
            derecha--;
        }
        if (izquierda >= derecha) {
            return derecha;
        } else {
            intercambiar(&arreglo[izquierda], &arreglo[derecha]);
            izquierda++;
            derecha--;
        }
    }
}

void quicksort(int arreglo[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int indiceParticion = particion(arreglo, izquierda, derecha);
        quicksort(arreglo, izquierda, indiceParticion);
        quicksort(arreglo, indiceParticion + 1, derecha);
    }
}

void mostrarNumOrd(const int vectB[N]){
    int i;
    printf ("\nEl vector anterior ordenado de menor a mayor es:");
    for (i=0; i<N; i++)
        printf ("%d ", vectB[i]);
    printf ("\n");
}

