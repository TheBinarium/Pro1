#include <stdio.h>
//#include <string.h>

#define LEN_P 21

void solicitud(char array[][LEN_P]);
void impression(char array[][LEN_P]);


int main() {
    char animales[7][LEN_P];
    solicitud(animales);
    impression(animales);
    return 0;
}

void solicitud(char array[][LEN_P]){
    for(int i=0; i<7; i++){
        //char aux[16];
        printf("\nIntroduzca el nombre de un animal ('Enter' para siguiente) :");
        gets(array[i]);
        //strcpy(array[i], aux);
    }
}

void impression(char array[][LEN_P]){
    int num;
    for(int i=0; i<7; i++){
        num=i+1;
        printf("\nAnimal %d: %s", num, array[i]);
    }
    printf("\n");
}
