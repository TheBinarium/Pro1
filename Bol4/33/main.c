#include <stdio.h>
#include <string.h>

#define N 101

int main() {
    char cadena[N];
    int letras=0, digits=0, others=0;
    printf("\nIntroduzca una cadena (Max. %d caracteres)(Letras especiales"
           " consideradas 'otros'):", N-1);
    scanf(" %[^\n]", cadena);
    for(int i=0;i<strlen(cadena);++i){
        if(48<=cadena[i]&&cadena[i]<=57) digits++;
        else if((65<=cadena[i]&&cadena[i]<=90)||(97<=cadena[i]&&cadena[i]<=122)) letras++;
        else others++;
    }
    printf("\nLetras %8d\nDigitos %7d\nOtros %9d\n", letras, digits, others);
    return 0;
}
