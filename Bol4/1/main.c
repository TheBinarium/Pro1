#include <stdio.h>

#define N 10

void solicitud(int a[], int n);
void  impression(int a[], int n);

int main() {
    int array[N];
    solicitud(array, N);
    impression(array, N);
    return 0;
}

void solicitud(int a[], int n){
    printf("\nEscriba %d números enteros:\n", N);
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);
}

void  impression(int a[], int n){
    printf("\nHe aquí su array:\n");
    for(int i=0; i<n; ++i) printf("%d\t", a[i]);
    printf("\n");
}