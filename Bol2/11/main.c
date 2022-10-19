/*
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C cuyo objetivo sea calcular las
 *          raíces de una ecuación de 2º grado, ax2+bx+c. El programa debe solicitar por
 *          teclado los coeficientes a, b, c. y mostrar por pantalla las soluciones x1 y x2.
 * IN: a, b, c
 * OUT: raíces 1 y 2, raíz doble, raíz compleja, a=0 (recta)
 */

#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, disc, xR1, xR2, xI, xR;
    printf("\nEscriba el valor de a:");
    scanf("%f", &a);
    printf("Escriba el valor de b:");
    scanf("%f", &b);
    printf("Escriba el valor de c:");
    scanf("%f", &c);
    if (a != 0) {
        disc = pow(b, 2.0) - 4 * a * c;
        if (disc > 0.0) {
            printf("\nLas dos raices son reales");
            xR1 = ((-b + sqrt(disc)) / (2.0 * a));
            xR2 = ((-b - sqrt(disc)) / (2.0 * a));
            printf("\nx1=%.2f x2=%.2f\n", xR1, xR2);
        } else {
            if (disc == 0.0) {
                xR1 = (-b) / (2.0 * a);
                printf("\nLa ecuacion solo tiene una raiz %.2f\n", xR1);
            } else { /* disc <0 */
                xR = (-b / (2.0 * a));
                xI = (sqrt(-disc) / (2.0 * a));
                printf("\nLa solución es compleja.");
                printf("\nLa parte real es %.2f y la imaginaria es +/-%.2fi\n", xR, xI);
            }
        }
    }
    else{
        printf("\nEs una recta, el punto de corte es:");
        xR1 = -c/b;
        printf("\nx=%.2f\n", xR1);
    }
    return 0;
}
