#include <stdio.h>
#define IRPF 15/100

/* EJ.10-BOL.02
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que solicite el salario anual
 *           bruto de una persona y muestre por pantalla la reducción del IRPF que se le
 *           aplicaría según los hijos menores de 18 años que tenga a su cargo, sabiendo que
 *           cada hijo (hasta 5) reduce un 10% el total del impuesto que le correspondería pagar.
 * IN: salario anual bruto, número de hijos (-18)
 * OUT: IRPF, reducción por hijos, total a pagar
 */

int main() {

    float salario, irpf, reduccion, total;
    int nhijos;

    //ENTRADA
    printf("\nIntroduzca su salario anual bruto en euros: ");
    scanf("%f", &salario);
    printf("\nIntroduzca el número de hijos menores de 18 años a su cargo: ");
    scanf("%d", &nhijos);

    //PROCESO Y SALIDA
    irpf=salario*IRPF;
    if(nhijos<0){
        printf("\nERROR, ha introducido un número de hijos no válido\n");
    }
    else{
        switch (nhijos) {
            case 0:
                reduccion=0;
                total=irpf;
                printf("\nIRPF (15%%): %.2f", irpf);
                printf("\nNo opta a reducción");
                printf("\nTotal anual a pagar: %.2f\n", total);
                break;
            case 1: case 2: case 3: case 4:
                reduccion=irpf*nhijos*0.1;
                total=irpf-reduccion;
                printf("\nIRPF (15%%): %.2f", irpf);
                printf("\nReducción debida a hijos a cargo: %.2f", reduccion);
                printf("\nTotal anual a pagar: %.2f\n", total);
                break;
            default:
                reduccion=(irpf*50)/100;
                total=irpf-reduccion;
                printf("\nIRPF (15%%): %.2f", irpf);
                printf("\nReducción debida a hijos a cargo (Maxima): %.2f", reduccion);
                printf("\nTotal anual a pagar: %.2f\n", total);
                break;
        }

    }

    return 0;
}
