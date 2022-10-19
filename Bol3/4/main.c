#include <stdio.h>
#include <math.h>

/* Ejercicio 4 del boletín 3
 * OBJETIVO: Plantee e implemente un subprograma en Lenguaje C para resolver una ecuación
 *           de segundo grado Ax2+Bx+C=0 a partir de sus coeficientes A, B y C. Además del
 *           subprograma, implemente la función apropiada para probar su funcionamiento,
 *           activando este último desde el programa principal.
 * IN: Coeficientes de Ax2+Bx+C=0
 * OUT: Solución de la ecuación de 2º grado
 */

void solucion_ecuacion();
int coeficientes_ecuacion();
int main(void) {
    void solucion_ecuacion(int coeficientes_ecuacion());
    return 0;
}


void solucion_ecuacion() {
    float a, b, c, disc, xR1, xR2, xI, xR;
    coeficientes_ecuacion();
    if (a != 0) {
        disc = pow(b, 2.0) - 4 * a * c;
        if (disc > 0.0) {
            void d2raices_reales();
        } else {
            if (disc == 0.0) {
                xR1 = (-b) / (2.0 * a);
                printf("La ecuacion solo tiene una raiz %.2f", xR1);
            } else { /* disc <0 */
                xR = (-b / (2.0 * a));
                xI = (sqrt(-disc) / (2.0 * a));
                printf("La solución es compleja");
                printf("La parte real es %.2f y la imaginaria es +/-%.2fi", xR, xI);
            }
        }
    }
    else{
        printf("Es una recta, el punto de corte es:");
        xR1 = -c/b;
        printf("x=%.2f", xR1);
        printf("\n\n");
    }
}

int coeficientes_ecuacion() {
    float a, b, c;
    printf("\nIntroduzca los coeficientes A B y C de la ecuación de segundo"
           "grado del tipo Ax2+Bx+Cx a resolver: ");
    scanf("%f %f %f", &a , &b, &c);
    return a, b, c;
}
