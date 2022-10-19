#include <stdio.h>

int main() {

    int lado;
    char letra;
    int fila, columna;

    //ENTRADA
    printf("\nIntroduzca el caracter a usar para pintar el cuadrado: ");
    scanf("%c", &letra);
    printf("Introduzca la distancia del lado del cuadrado (Unidades): ");
    scanf("%d", &lado);
    puts("");

    //PROCESO Y SALIDA
    for (fila=1; fila <= lado; ++fila) {
        for (columna=1; columna <= lado; ++columna) {
            if(fila==1){
                printf("%c  ", letra);
            }
            else if(columna==1) {
                printf("%c  ", letra);
            }
            else if(fila==lado) {
                printf("%c  ", letra);
            }
            else if(columna==lado) {
                printf("%c  ", letra);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}

//Int *p, &edad
//p=edad
