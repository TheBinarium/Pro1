#include <stdio.h>
#include <stdbool.h>

#define N 10

void construirArray(int array[]);
bool comprobar(const int array[], int len);
void termination(bool condicion);

int main() {
    int a[N]={0};
    bool cap;
    construirArray(a);
    cap=comprobar(a, N);
    termination(cap);
    return 0;
}

void construirArray(int array[]){
    printf("\nPrograma que comprueba si un vector de enteros es capicua.\n"
           "Introduce el vector (max. 10 elementos): ");
    for(int i=0;i<N;i++){
        scanf("%d", &array[i]);
    }
}

bool comprobar(const int array[], int len) {
    int i;
    bool capicua = true;
    int mitad = len/2;
    for (i=0; i < mitad; ++i){
        if (array[i] != array[len-1-i]) {
            capicua = false;
        }
    }
    return capicua;
}

void termination(bool condicion){
    char cadena[3]="no";
    if(condicion==true) {
        cadena[0] = 's';
        cadena[1] = 'i';
    }
    printf("\nEl vector de enteros %s es capicua.\n", cadena);
}
