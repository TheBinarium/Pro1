#include <stdio.h>

/* Ejercicio 02 del boletín 03
 * OBJETIVO: Plantee e implemente un subprograma en Lenguaje C que a partir de la inicial
 *           de un día de la semana (L, M, X, J, V, S, D) introducida mediante el teclado,
 *           devuelva y muestre por pantalla el nombre del día en cuestión. Además del
 *           subprograma, implemente la función apropiada para probar su funcionamiento.
 * IN: Inicial de día
 * OUT: Nombre del día
 */

void mostrar_dia();
char letra_pedida();
int main() {
    mostrar_dia(letra_pedida());
    return 0;
}



void mostrar_dia() {
    char letra;
    switch (letra) {
        case 'L':
            printf("\nEs LUNES, viva Cristo Rey.\n");
            break;
        case 'M':
            printf("\nHoy es MARTES.\n");
            break;
        case 'X':
            printf("\nHoy es MIERCOLES, se fuma makelele.\n");
            break;
        case 'J':
            printf("\nHoy es JUEVES.\n");
            break;
        case 'V':
            printf("\nHoy es VIERNES!\n");
            break;
        case 'S':
            printf("\nHoy es SABADO.\n");
            break;
        case 'D':
            printf("\nHoy es DOMINGO.\n");
            break;
        default:
            printf("\nERROR, creo que no ha leido muy bien el enunciado.\n");
            break;
    }
}


char letra_pedida(){
    char letra;
    printf("\nInicial del dia de la semana (L, M, X, J, V, S, D): ");
    scanf("%c", &letra);
    return letra;
}