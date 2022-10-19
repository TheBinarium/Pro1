#include <stdio.h>

/* EJ.6-BOL.2
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que a partir de la siguiente
             información (correspondiente a un test realizado por los alumnos): cantidad
             total de preguntas planteadas y la cantidad de preguntas contestadas
             correctamente. Permita insertar los dos datos por teclado y muestre como resultado
             el nivel del mismo según el porcentaje de respuestas correctas obtenidas.
 * IN: preguntas planteadas, respuestas correctas
 * OUT: nivel (según % de respuestas correctas)
 */

int main() {

    int preguntas, respuestas, porcentaje;

    //ENTRADA
    printf("\nNúmero de preguntas en el test:");
    scanf("%d", &preguntas);
    printf("Número de respuestas correctas en el test:");
    scanf("%d", &respuestas);

    //PROCESO
    porcentaje = 100*respuestas/(float)preguntas;

    //SALIDA
    if(porcentaje>=90)
        printf("\nNivel máximo (>=90%%)\n");
    else if(porcentaje>=75)
        printf("\nNivel medio (>=75%%)\n");
    else if(porcentaje>=50)
        printf("\nNivel regular (>=50%%)\n");
    else
        printf("\nFuera de nivel (<50%%)\n");

    return 0;
}
