#include <stdio.h>
#define ABC printf("%d<=%d<=%d",a, b, c)
#define ACB printf("%d<=%d<=%d",a, c, b)
#define CAB printf("%d<=%d<=%d",c, a, b)
#define BCA printf("%d<=%d<=%d",b, c, a)
#define CBA printf("%d<=%d<=%d",c, b, a)
#define BAC printf("%d<=%d<=%d",b, a, c)

/* EJ.5-BOL.02
 * OBJETIVOS: Plantee e implemente un programa en Lenguaje C que muestre por pantalla tres
 *            números enteros introducidos por teclado ordenados de menor a mayor.
 * IN: a, b, c
 * OUT: relación de orden (m a M)
 * PRECONDICIONES: Solo números enteros (Positivos, negativos y el cero)
 */

int main() {
    int a, b, c;

    //ENTRADA
    printf("\nPrimer numero:");
    scanf("%d", &a);
    printf("Segundo numero:");
    scanf("%d", &b);
    printf("Tercer numero:");
    scanf("%d", &c);

    //PROCESO
    if(a < b)
        if(b < c) ABC;
        else if(c < a) CAB;
        else ACB;
    else
        if(c < b) CBA;
        else if(a < c) BAC;
        else BCA;

    //SALIDA
    printf("\n");
    return 0;
}

