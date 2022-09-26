#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define N 9

bool val(char *cadena);

int main() {
    char cadena[N];
    printf("\nIntroduzca una cadena de %d caracteres para comprobar si"
           " se puede convertir a un numero real:", N);
    scanf(" %[^\n]", cadena);
    if(val(cadena)) printf("\nSi es posible.\n");
    else printf("\nNo es posible.\n");
    return 0;
}

bool val(char *cadena){
    for (int i=0; i<strlen(cadena); ++i) {
        if(cadena[i]<48||cadena[i]>57) return false;
    }
    return true;
}
