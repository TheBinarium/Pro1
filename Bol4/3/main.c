#include <stdio.h>

#define MAX 30

float arraySolicitado(float a[]);
void imprSuma(float a);


int main() {
    float array[MAX];
    imprSuma(arraySolicitado(array));
    return 0;
}


float arraySolicitado(float a[]){
    float suma_array=0;
    for(int i=0;i<MAX;i++){
        printf("\nIntroduce el elemento %d de la suma (max. %d):", (i+1), MAX);
        scanf("%f", &a[i]);
        suma_array+=a[i];
    }
    return suma_array;
}

void imprSuma(float a){
    printf("\nLa suma se todos los elementos del vector introducido es: %.3f\n", a);
}