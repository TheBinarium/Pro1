#include <stdio.h>

int main() {

    char operador;
    int a, b, resultado;

    //ENTRADA
    printf("\nPrimer número:");
    scanf("%d", &a);
    printf("Segundo número:");
    scanf("%d", &b);
    printf("Que operación entre dos números reales desea realizar?\n"
           "+ (Suma)\t - (Resta\t * (Multiplicación)\t / (División)\t %% (Resto de división))\t\n");
    scanf(" %c", &operador);

    //PROCESO Y SALIDA
    switch (operador){
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '%':
            resultado = a%b;
            break;
        case '/':
            if(b==0)
                printf("ERROR, no puede dividirse por 0");
            else
                resultado = a/b;
            break;
        case '*':
            if(b==0)
                printf("ERROR, no puede dividirse por 0");
            else
                resultado = a%b;
            break;
        default: printf("Error asegúrese está usando un operador válido (+,-,/,%%,*) y números reales\n");
    }
    printf("\nEl resultado de %d %c %d es: %d\n", a, operador, b, resultado);
    return 0;
}
