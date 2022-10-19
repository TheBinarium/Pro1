#include <stdio.h>

int main() {

    int lado;
    char a;
    int columna, fila;

    //ENTRADA
    printf("\nIntroduzca el caracter a usar para pintar el cuadrado:");
    scanf("%c", &a);
    printf("Introduzca la distancia del lado del cuadrado (Unidades)");
    scanf("%d", &lado);
    puts("");

    //PROCESO Y SALIDA
    for (fila=0; fila<lado; ++fila) {
        for (columna=0; columna<lado; ++columna) {
            printf("%c  ", a);
        }
        printf("\n");
    }

    return 0;
}
