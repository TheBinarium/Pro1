/* EJ.13-BOL.2
 * OBJETIVOS: Plantee e implemente un programa en Lenguaje C para clasificar triángulos en
 *            función de las longitudes de sus lados, que se solicitarán por teclado, de forma
 *            que se indique por pantalla si el triángulo es equilátero (todos los lados iguales),
 *            isósceles (dos lados iguales) o escaleno (todos los lados diferentes).
 * IN: lado1, lado2, lado3
 * OUT: tipo de triángulo
 *
 *ADVERT: Hay algo mal con la parte isosceles
 */

#include <stdio.h>

float lado1, lado2, lado3, isolado;
//char iso1[10]="lado1", iso2[10]="lado2";

int main() {
    printf("\nIntroduzca el primer lado del triangulo:");
    scanf("%f", &lado1);
    printf("\nIntroduzca el segundo lado del triangulo:");
    scanf("%f", &lado2);
    printf("\nIntroduzca el tercer lado del triangulo:");
    scanf("%f", &lado3);
    if(lado1==lado2||lado1==lado3||lado2==lado3){
        if(lado1==lado2) isolado=lado1;
        else if(lado2==lado3) isolado=lado2;
        else if(lado1==lado3) isolado=lado1;
        printf("\nEl triangulo es ISOSCELES (lado1 = lado2 = %.2f)\n", isolado);
    }
    else if(lado1==lado2 && lado2==lado3){
        printf("\nEl triangulo es EQUILATERO (lado1 = lado2 = lado3 = %.2f)\n", lado1);
    }
    else{
        printf("\nEl triangulo es ESCALENO (Todos los lados son distintos)\n");
    }
    return 0;
}
