#include <stdio.h>

/* Ejercicio 01 del boletín 03
 * OBJETIVO: Plantee e implemente un subprograma en Lenguaje C para escribir N líneas en
 *           blanco por pantalla. Además del subprograma, implemente un programa principal
 *           para probar su funcionamiento.
 * IN: Número de líneas en blanco
 * OUT: Líneas en blanco
 */

void lineas_blanco(int n);
int numero_pedido();
int main() {
    lineas_blanco(numero_pedido());
    return 0;
}



void lineas_blanco(int n){
    int i;
    for (i = 0; i < n-1 ; ++i) {                //Puse n-01 porque si no cuenta también el ENTER nuestro.
        printf("\n");
    }
}

//PRECONDICIÓN: El número debe estar en el rango [0,25).
int numero_pedido(){
    int numero;
    printf("\nCuantas lineas en blanco desea imprimir (Rango [0,25))?: ");
    do {
        scanf("%d", &numero);
    } while (numero<1 || numero>24);
    return numero;
}