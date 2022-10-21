#include <stdio.h>
#define A printf("El mayor de los tres numeros introducidos es: %.2f", a)
#define B printf("El mayor de los tres numeros introducidos es: %.2f", b)
#define C printf("El mayor de los tres numeros introducidos es: %.2f", c)

/* EJ.04-BOL.02
 * OBJETIVOS: Plantee e implemente un programa en Lenguaje C que muestre por pantalla el
 *            mayor de tres números introducidos por teclado.
 * IN: a, b, c
 * OUT: mayor de a, b, c
 */

int main() {

    float a, b, c;

    //ENTRADA
    printf("\nPrimer numero:");
    scanf("%f", &a);
    printf("Segundo numero:");
    scanf("%f", &b);
    printf("Tercer numero:");
    scanf("%f", &c);

    //PROCESO
    if(a <= b && b <= c) C;
    else if(a <= b && c <= b) B;
    else if(a >= b && c <= a) A;
    else if(a >= b && a <= c) C;

    //SALIDA
    printf("\n");
    return 0;
}
