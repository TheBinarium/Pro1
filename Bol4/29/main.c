#include <stdio.h>
#include <string.h>

#define N 101

void invertir(char *str);

int main() {
    char cadena[N];
    printf("\n/Programa que invierte el orden de las letras de una frase/\n");
    printf("\nIntroduzca una frase (Max. %d caracteres:\n", N-1);
    scanf(" %[^\n]", cadena);
    invertir(cadena);
    printf("\nLa cadena introducida al reves: %s\n", cadena);
    return 0;
}

void invertir(char *str){
    int len= strlen(str), j=0, i;
    char aux[len];
    for(i=len-1;i>=0;--i) aux[i]=str[j++];
    for(i=0;i<len;++i) str[i]=aux[i];
}
