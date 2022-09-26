#include <stdio.h>
#include <string.h>

#define N 5

struct ciudad{
    char nombre[20];
    int habitantes;
};

struct ciudad leerDatos();
void sortNames(struct ciudad iCiudad[N]);
void sortPob(struct ciudad iCiudad[N], int izquierda, int derecha);
int particion(struct ciudad  iCiudad[N], int izquierda, int derecha);

int main() {
    struct ciudad capitales[N];
    int option;
    printf("\n/Programa que guarda %d capitales europeas y su poblacion/\n", N);
    for(int i=0;i<N;++i){
        capitales[i]=leerDatos();
    }
    do {
        printf("\nQuiere ordenarlas alfabeticamente (1) o por poblacion (2)?: ");
        scanf("%d", &option);
    } while (option!=1&&option!=2);
    if(option==1) sortNames(capitales);
    else sortPob(capitales, 0, N-1);
    printf("\nLas capitales ordenadas asi son:\n");
    for(int i=0;i<N;i++){
        printf("%s\t%d\n",capitales[i].nombre, capitales[i].habitantes);
    }
    return 0;
}

struct ciudad leerDatos(){
    struct ciudad iCapital;
    printf("\nIntroduzca el nombre de la ciudad:");
    scanf("%s", iCapital.nombre);
    printf("Introduzca la poblacion censada en la misma:");
    scanf("%d", &iCapital.habitantes);
    return iCapital;
}

void changeNames(char *cadena1, char *cadena2){
    char aux[20];
    strcpy(aux, cadena1);
    strcpy(cadena1, cadena2);
    strcpy(cadena2, aux);
}

void sortNames(struct ciudad iCiudad[N]){
    for(int i=0;i<N;++i){
        for (int j=1+i; j<N; ++j) {
            if(strcmp(iCiudad[i].nombre, iCiudad[j].nombre)>0){
                changeNames(iCiudad[i].nombre, iCiudad[j].nombre);
            }
        }
    }
}

int particion(struct ciudad iCiudad[N], int izquierda, int derecha) {
    int aux;
    int pivote = iCiudad[izquierda].habitantes;
    while (1) {
        while (iCiudad[izquierda].habitantes > pivote) {
            izquierda++;
        }
        while (iCiudad[derecha].habitantes < pivote) {
            derecha--;
        }
        if (izquierda >= derecha) {
            return derecha;
        } else {
            aux = iCiudad[izquierda].habitantes;
            iCiudad[izquierda].habitantes = iCiudad[derecha].habitantes;
            iCiudad[derecha].habitantes=aux;
            changeNames(iCiudad[izquierda].nombre, iCiudad[derecha].nombre);
            izquierda++;
            derecha--;
        }
    }
}

void sortPob(struct ciudad iCiudad[N], int izquierda, int derecha){
    if (izquierda < derecha) {
        int indiceParticion = particion(iCiudad, izquierda, derecha);
        sortPob(iCiudad, izquierda, indiceParticion);
        sortPob(iCiudad, indiceParticion + 1, derecha);
    }
}
