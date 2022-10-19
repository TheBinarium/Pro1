#include <stdio.h>

/* EJ.8-BOL.2
 * OBJETIVO: Plantee e implemente un programa en Lenguaje C que solicite al usuario una
             fecha del año en curso y le muestre en el centro de la pantalla (aproximadamente)
             el número de días transcurridos desde el comienzo de año hasta esa fecha.
 * IN: fecha (día, mes), año
 * OUT: días
 * PRECONDICIONES:
 */

int main() {

    int dd, mm, ano, dias;

    //ENTRADA
    printf("\n\nEn que año quiere calcular los días transcurridos hasta la fecha elegida?: ");
    scanf("%d", &ano);
    printf("\nEscriba una fecha del año %d (dd mm): ", ano);
    scanf("%d %d", &dd, &mm);

    //PROCESO Y SALIDA
    switch(mm){
        case 1:
            dias = dd;
            break;
        case 2:
            dias = dd+30;
            break;
        case 3:
            dias = dd+58;
            break;
        case 4:
            dias = dd+89;
            break;
        case 5:
            dias = dd+119;
            break;
        case 6:
            dias = dd+150;
            break;
        case 7:
            dias = dd+180;
            break;
        case 8:
            dias = dd+211;
            break;
        case 9:
            dias = dd+242;
            break;
        case 10:
            dias = dd+272;
            break;
        case 11:
            dias = dd+303;
            break;
        case 12:
            dias = dd+333;
            break;
        default: printf("\nERROR, introduzca un mes en formato mm del 01 al 12\n");
            break;
    }

    if(ano%4==0 && mm>2){
        dias = dias + 1;
        printf("\nLa fecha introducida corresponde al día %d del año %d (bisiesto).\n\n", dias, ano);
    }
    else{
        printf("\nLa fecha introducida corresponde al día %d del año %d.\n\n", dias, ano);
    }

    return 0;
}
