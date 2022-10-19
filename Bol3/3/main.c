#include <stdio.h>

/* Ejercicio 3 del boletín 3
 * OBJETIVO: Escribir un programa, empleando funciones de usuario, que pida un número
 *           entero y muestre por pantalla el mayor entero que lo divide exceptuando el mismo.
 * IN: Número entero
 * OUT: Mayor divisor entero
 */

void mayor_divisor();
int entero_pedido();
int main() {
    mayor_divisor(entero_pedido());
    return 0;
}


void mayor_divisor() {
    int entero;
    int max_div;
    if (entero%2==0){
        max_div=entero/2;
        printf("\nSu máximo divisor es %d.\n", max_div);
    }
    else if (entero%3==0){
        max_div=entero/3;
        printf("\nSu máximo divisor es %d.\n", max_div);
    }
    else if (entero%5==0){
        max_div=entero/5;
        printf("\nSu máximo divisor es %d.\n", max_div);
    }
    else if (entero%7==0){
        max_div=entero/7;
        printf("\nSu máximo divisor es %d.\n", max_div);
    }
    else {
        printf("\nSu máximo divisor es él mismo.\n");
    }
}


int entero_pedido(){
    int entero;
    printf("\nIntroduzca un numero entero: ");
    scanf("%d", &entero);
    return entero;
}