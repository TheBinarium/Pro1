/* EJ.14-BOL.02
 * OBJETIVOS: Plantee e implemente un programa en Lenguaje C que solicite por teclado dos
 *            números enteros positivos y que muestre por pantalla su multiplicación en el
 *            formato clásico. Debe comprobar que el primer número tiene 03 cifras y es positivo,
 *            y que el segundo número es también positivo y tiene una única cifra. En caso de
 *            que no se cumplan estas condiciones, el programa debe alertar al usuario con un
 *            mensaje apropiado de error.
 * IN: entero positivo de tres cifras, entero positivo de una cifra.
 * OUT: producto o mensaje de error.
 */

#include <stdio.h>

int main() {
    int posTres, posUna;
    float cifrasTres;
    char igual[]="====";
    char por='x';
    printf("\nIntroduzca un entero positivo de TRES cifras:");
    scanf("%d", &posTres);
    printf("\nIntroduzca un entero positivo de UNA cifras:");
    scanf("%d", &posUna);
    cifrasTres=(float)posTres/100;
    if(cifrasTres<1||cifrasTres>=10||posTres<0) {
        printf("\nERROR, el primer numero debe ser POSITIVO y tener 03 CIFRAS\n");
        if(posUna<1||posUna>=10) {
            printf("\nERROR, el segundo numero debe ser POSITIVO y tener 01 CIFRA\n");
        }
    }
    else if(posUna<1||posUna>=10) {
        printf("\nERROR, el segundo numero debe ser POSITIVO y tener 01 CIFRA\n");
    }
    else {
        printf("\n%16d\n", posTres);
        printf("%14c %d\n", por, posUna);
        printf("%16s\n", igual);
        printf("%16d\n", posTres * posUna);
    }
    return 0;
}