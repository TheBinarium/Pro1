#include <stdio.h>
#define YACUMPLISTE printf("\nEnhorabuena, usted ya cumplió este año, asi que tiene %d años.\n", edad)
#define  NOCUMPLISTE printf("\nComo usted aún no cumplió este año, tiene %d años.\n", edad)

/* EJ.9-EJ.10
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que implemente el algoritmo
 *           necesario para calcular la edad de una persona suponiendo que se le pide al usuario
 *           que introduzca su fecha de nacimiento por teclado y a la salida muestra por pantalla
 *           su edad con respecto a la fecha actual. Tenga en cuenta el cumpleaños exacto de la
 *           persona para realizar el cálculo.
 * IN: fecha de nacimiento, fecha actual
 * OUT: edad
 */

int main() {

    int dd, mm, aaaa;
    int ddact, mmact, aaaaact;
    int edad;

    //ENTRADA
    printf("\nIntroduzca su fecha de nacimiento (dd mm aaaa): ");
    scanf("%d %d %d", &dd, &mm, &aaaa);
    printf("\nIntroduzca la fecha actual (dd mm aaaa): ");
    scanf("%d %d %d", &ddact, &mmact, &aaaaact);

    //PROCESO
    if(mm==mmact) {
        if (dd<=ddact) {
            edad = aaaaact - aaaa;
            YACUMPLISTE;
        } else {
            edad = aaaaact - aaaa - 1;
            NOCUMPLISTE;
        }
    }
    else if(mm<mmact){
        edad=aaaaact-aaaa;
        YACUMPLISTE;
    }
    else{
        edad=aaaaact-aaaa-1;
        NOCUMPLISTE;
    }

    return 0;
}
