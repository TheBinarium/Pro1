#include <stdio.h>
#include <string.h>

#define N 101
#define M 31

void change(char *phrase, char *old_word, char *new_word);


int main() {
    char frase[N], palabra[M], synonym[M];
    int option;
    printf("\nIntroduzca una frase (Max. %d caracteres):", N-1);
    scanf(" %[^\n]", frase);
    do {
        do {
            printf("1->Cambiar una palabra / 2->Salir:");
            scanf("%d", &option);
        } while (option != 1 && option != 2);
        if(option==1){
            printf("\nIntroduzca una palabra de la frase (Max. %d caracteres):", M-1);
            scanf(" %[^\n]", palabra);
            printf("\nIntroduzca un sinonimo (Max. %d caracteres):", M-1);
            scanf(" %[^\n]", synonym);
            change(frase, palabra, synonym);
        }
    }while (option!=2);
    printf("\nFIN DEL PROGRAMA\n");
    return 0;
}


void change(char *phrase, char *old_word, char *new_word){

    int apariciones=0, i=0, j=0;
    int old_len=strlen(old_word);
    int new_len=strlen(new_word);
    int new_phrase_len=strlen(phrase);
    int difference= new_len - old_len;

    while(i<new_phrase_len) {
        if (strstr(phrase, old_word) == phrase) {
            apariciones++;
            i+=old_len;
        }
        else i++;
    }

    new_phrase_len += apariciones * difference;
    char new_phrase[new_phrase_len];

    i=0;
    while(i<strlen(phrase)){
        if (strstr(&phrase[i], old_word) == &phrase[i]){
            strcpy(&new_phrase[j], new_word);
            i+=old_len;
            j+=new_len;
        }
        else{
            new_phrase[j] = phrase[i];
            i++;
            j++;
        }
    }
    new_phrase[j]='\0';
    printf("\nCadena tras modificaciones: %s\n\n", new_phrase);
}
