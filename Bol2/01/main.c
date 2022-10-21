/*
 * EJ.01-BOL.02
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que solicite un número
 *           entero por teclado y muestre por pantalla si es positivo o negativo.
 * IN: número entero
 * OUT: positivo?, negativo?
 * PRECONDICIONES: El usuario se asegura de que el número introducido sea tipo entero
 *                 para asegurar el correcto funcionamiento del programa.
 */


#include <stdio.h>

int num;

int main() {
    printf("\nIntroduzca un entero para comprobar su signo:");
    scanf("%d", &num);
    if(num!=0){
        if(num>0){
            printf("El numero elegido es positivo\n");
        }
        else{
            printf("El numero elegido es negativo\n");
        }
    }
    else{
        printf("El cero no tiene signo.\n");
    }
    return 0;
}
