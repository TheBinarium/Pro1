#include <stdio.h>
#include <string.h>

#define N 101

int main() {
    char phrase[N], word[20];
    int j=0;
    printf("\nIntroduzca una frase de como maximo %d caracteres:\n", N-1);
    scanf(" %[^\n]", phrase);
    for(int i=0;i<strlen(phrase);++i){
        if(phrase[i]!=' '&&phrase[i]!=','&&phrase[i]!='.'){
            word[j++]=phrase[i];
        }
        else{
            if((phrase[i]==' '||phrase[i]==','||phrase[i]=='.')&&(phrase[i-1]!=' '&&phrase[i-1]!=','&&phrase[i-1]!='.')) {
                printf("\n%s\t%llu", word, strlen(word));
                j = 0;
                strncpy(word, "", 20);
            }
        }
    }
    printf("\n%s\t%llu", word, strlen(word));
    printf("\n");
    return 0;
}
