#include <stdio.h>

int main() {

    int altura, columna, fila;
    char caracter;

    //ENTRADA
    printf("\nIntroduzca el carácter a usar para pintar el triángulo: ");
    scanf("%c", &caracter);
    printf("\nIntroduzca la altura del triángulo (Unidades): ");
    scanf("%d", &altura);
    puts("");

    //PROCESO Y SALIDA
    for (fila=0; fila < altura; ++fila) {
        for (columna=0; columna<altura-fila; ++columna) {
            printf("   ");
        }
        for (columna=0; columna < fila*2+1; ++columna) {
            printf("%c  ", caracter);
        }
        printf("\n");
    }

    return 0;
}
