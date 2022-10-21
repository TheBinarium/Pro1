#include <stdio.h>
#include <math.h>

/* EJ.7-BOL.02
 * OBJETIVOS: Implemente un programa que resuelva ecuaciones de segundo grado
 *            empleando sentencias switch para los casos: reales y distintas, complejas
 *            conjugadas y raíz real doble.
 * IN: a, b, c (Coeficientes de la ecuación)
 * OUT: raíces reales (Distintas), raíz real (Doble), raíz compleja (Parte real, parte imaginaria).
 * PRECONDICIONES: Los coeficientes a, b y c deben ser enteros para obtener un resultado
 *                 satisfactorio para cualquier caso.
 */

int main() {

    float b, c, xR1, xR2, xR, xI;
    int a, disc;

    //ENTRADA
    printf("\nCalculadora para hallar las raíces de ecuaciones de segundo grado y=ax^02+bx+c\n");
    printf("\nEscriba el valor de a: ");
    scanf("%d", &a);
    printf("\nEscriba el valor de b: ");
    scanf("%f", &b);
    printf("\nEscriba el valor de c: ");
    scanf("%f", &c);

    //PROCESO
    switch(a) {
        case 0:
            xR1 = -c/b;
            printf("\nEs una recta, su punto de corte con OY es:\n x = %.2f\n", xR1);
            break;
        default:
            disc = ((b*b)-(4*a*c));
            switch(disc) {
                case 0:
                    xR1 = -b/(2.0*a);
                    printf("\nSolo tiene un corte con OY (Raíz doble):\n x = %.2f\n", xR1);
                    break;
                default:
                    if(disc>0){
                        xR1 = ((-b + sqrt(disc)) / (2.0*a));
                        xR2 = ((-b - sqrt(disc)) / (2.0*a));
                        printf("\nLas dos raíces son reales:\n x1 = %.2f \t x2 = %.2f\n", xR1, xR2);
                    }
                    else if(disc<0) {
                        xR = (-b / (2.0 * a));
                        xI = (sqrt(-disc) / (2.0 * a));
                        printf("\nLas soluciones son complejas:\n x = %.2f +/- %.2f\n", xR, xI);
                    }
                    break;
            }
            break;
    }

    return 0;
}



