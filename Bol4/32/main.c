#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct conductor{
    char nombre[60];
    int edad;
    char matricula[7];
};

struct conductor leerDatos();
bool isMatricula(struct conductor iConductor);

int main() {
    struct conductor nuevoConductor=leerDatos();
    if(isMatricula(nuevoConductor)) printf("\nLa suma de los numeros de la matricula es igual"
                                           " a la edad del conductor y las letras de la matricula coinciden"
                                           " con las\niniciales del nombre y los apellidos.\n");
    else printf("\nAlguna de las condiciones no se cumple.\n");
    return 0;
}

struct conductor leerDatos(){
    struct conductor iConductor;
    printf("\nIntroduzca su nombre y apellidos: ");
    scanf(" %[^\n]", iConductor.nombre);
    printf("\nIntroduzca su edad: ");
    scanf("%d", &iConductor.edad);
    printf("\nIntroduzca la matricula de su vehiculo (4N, 3L): ");
    for(int i=0; i<7; ++i) {
        scanf(" %c", &iConductor.matricula[i]);
    }
    return iConductor;
}

bool isMatricula(struct conductor iConductor){
    int suma=0, j=0;
    char aux[3];
    bool aux_bool=true;
    for(int i=0; i<4; ++i) suma+=iConductor.matricula[i]-48;
    aux[0]=iConductor.nombre[0];
    j++;
    for(int i=1; i<strlen(iConductor.nombre); ++i){
        if(iConductor.nombre[i] == ' '&& j<3){
            aux[j]=iConductor.nombre[i+1];
            ++j;
        }
    }
    for(int i=0; i<3;++i) {
        if (aux[i] != iConductor.matricula[i+4]) aux_bool=false;
    }
    if(suma==iConductor.edad && aux_bool) return true;
    else return false;
}
