#include <stdio.h>
#include <string.h>

#define N 101

void eliminarEsp(char *old_str);

int main() {
    char cadena[N];
    printf("\n/Programa que elimina los espacios sobrantes cuando encuentra dos o mas seguidos"
           " en una cadena/\n");
    printf("\nEscriba una frase (Max. %d caracteres):\n", N-1);
    scanf(" %[^\n]", cadena);
    eliminarEsp(cadena);
    return 0;
}

void eliminarEsp(char *old_str) {
    int i, j=1, esp_sobrantes=0, old_len=strlen(old_str), new_len;
    for(i=1;i<old_len;++i){
        if(old_str[i]==' '&&old_str[i-1]==' ') esp_sobrantes+=1;
    }
    new_len=old_len-esp_sobrantes;
    char new_str[new_len];
    new_str[0]=old_str[0];
    for(i=1;i<old_len;++i){
        if(old_str[i]!=' '||(old_str[i]==' '&&old_str[i-1]!=' ')){
            new_str[j]=old_str[i];
            j++;
        }
    }
    new_str[j]='\0';
    printf("\nCadena original: %s", old_str);
    printf("\nCadena corregida: %s\n", new_str);
}
