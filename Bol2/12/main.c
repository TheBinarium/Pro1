/*
 * EJ.12-BOL.2
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que solicite tres números
 *           enteros positivos (por teclado) y que muestre por pantalla el cociente y el resto
 *           de dividir el mayor de ellos por el menor con un formato determinado
 * IN: entero1, entero2, entero3
 * OUT: enteroMayor, enteroMenor, cociente, resto
 */

#include <stdio.h>

int n1, n2, n3, max, min, cociente, resto;

int main() {
    printf("\nADVERTENCIA: Los numeros que introduzca deben ser enteros positivos.");
    printf("\nPrimer numero:");
    scanf("%d", &n1);
    printf("Segundo numero:");
    scanf("%d", &n2);
    printf("Tercer numero:");
    scanf("%d", &n3);

    if(n1>=n2){
        if(n3>=n1){
            max=n3;
            min=n2;
        }
        else if(n3<=n2){
            max=n1;
            min=n3;
        }
        else if(n3<=n1 && n3>=n2){
            max=n1;
            min=n2;
        }
    }
    else{
        if(n3>=n2){
            max=n3;
            min=n1;
        }
        else if(n3<=n1){
            max=n2;
            min=n3;
        }
        else if(n3<=n2 && n3>=n1){
            max=n2;
            min=n1;
        }
    }

    if(min==0){
        printf("\nERROR, no puede dividirse entre cero\n");
    }
    else{
        cociente=max/min;
        resto=max%min;
        printf("\n%23d dividido  |  entre %-24d\n"
               "                                   ----------\n"
               "                           R = %d    C = %d\n", max, min, resto, cociente);
    }
    return 0;
}
