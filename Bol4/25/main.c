#include <stdio.h>
#include <string.h>

int main() {
    char cadena[500];
    int len, vocales=0;
    float proportion;
    printf("\nIntroduzca una o varias frases (Max.500 caracteres):");
    gets(cadena);
    len=strlen(cadena);
    for(int i=0;i<len;++i){
        if(cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u') vocales++;
    }
    proportion=((float)vocales*100/len);
    printf("\nTexto introducido: %s", cadena);
    printf("\nLongitud de la cadena: %d caracteres", len);
    printf("\nFrecuencia de vocales: %.2f%%\n", proportion);
    return 0;
}
