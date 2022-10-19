#include <stdio.h>
#define ENTER '\n'

/*
 * OBJETIVO: Uso de bucle while para aceptar x número de notas y que , al introducir un 'centinela', finalice
 * ENTRADA: n1, n2, n3...
 * SALIDA: nota max, nota min, nota media
 * PRECONDICIÓN: El número que haga acabar el bucle solo puede ser un entero negativo y los numeros que se
 *               se pueden introducir solo pueden estar en el rango [0,10] y que separadas con espacios
 *               y enter es el centinela.
 */

int main() {

    float nota, max, min, media, suma=0;
    int cont = 0;

    //ENTRADA
    printf("Introduzca las notas de sus alumnos (Rango = [0,10]):");

    //PROCESO
    do {
        do {
            scanf("%f", &nota);
        }while(nota<0 || nota>10);
        if(cont==0){
            max = nota;
            min = nota;
        }
        else if (nota>max) max=nota;
        else if (nota<min) min=nota;
        cont++;
        suma=suma+nota;
    }while(ENTER!=getchar());

    //SALIDA
    if(cont>0){
        media=suma/cont;
        printf("\nLa nota maxima es %.2f\n"
               "La nota minima es %.2f\n"
               "La nota media es %.2f", max, min, media);
    }
    else puts("\nERROR, no hay datos.\n");

    return 0;
}
