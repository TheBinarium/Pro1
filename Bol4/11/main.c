#include <stdio.h>

#define L 10

void construirArray(int array[]);
int sumaRecursiva(const int array[], int len);

int main() {
    int a[L]={0}, b;
    construirArray(a);
    b=sumaRecursiva(a, L);
    printf("\nEl valor de la suma de los elementos del array es: %d\n", b);
    return 0;
}

void construirArray(int array[]){
    printf("\nPrograma que realiza la suma recursiva de los elementos de un vector de enteros\n"
           "Introduce el vector (max. 10 elementos): ");
    for(int i=0;i<L;i++){
        scanf("%d", &array[i]);
    }
}

int sumaRecursiva(const int array[], int len){
    if(len==1) return array[0];
    else return array[len-1]+sumaRecursiva(array, len-1);
}
