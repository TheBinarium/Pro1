/*
 * EJ.02-BOL.02
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que solicite un número
 *           entero por teclado y muestre por pantalla si es par o impar.
 * IN: número entero
 * OUT: par?, impar?
 * PRECONDICIONES: El usuario se asegura de que el número introducido sea tipo entero
 *                 para asegurar el correcto funcionamiento del programa.
 */

#include <stdio.h>

int num, paridad;

int main() {
    printf("\nIntroduzca un entero para comprobar su signo:");
    scanf("%d", &num);
    paridad=num%2;
    if(paridad==1 || paridad==-1) {
        printf("El numero elegido es impar\n");
    }
    else{
        printf("El numero elegido es par\n");
        }
    return 0;
}