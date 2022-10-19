#include <stdio.h>

/* Ejercicio 2 del boletín 3
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
            printf("\nSiii joder, es LUNES, viva Cristo Rey.\n");
            break;
        case 'M':
            printf("\nHoy es MARTES, no hay tiempo que perder.\n");
            break;
        case 'X':
            printf("\nHoy es MIERCOLES, se fuma makelele\nHoy es MIERCOLES, se fuma makelele\n...\n");
            break;
        case 'J':
            printf("\nOtro JUEVES más vivo, enhorabuena supongo.\n");
            break;
        case 'V':
            printf("\nXavaaaleees, que hoy es VIERNES!\n");
            break;
        case 'S':
            printf("\nHoy es SABADO, tu eliges que hacer hoy.\n");
            break;
        case 'D':
            printf("\nHoy es DOMINGO asi que tirando para misa que es el día del Señor.\n");
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