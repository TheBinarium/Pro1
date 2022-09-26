#include <stdio.h>
#include <string.h>

#define N 2

struct empleado{
    char nombre[50];
    int d, m, a;
    char puesto[11];
    char infonum[9];
    char estudios[40];
};

struct empleado leerDatos(){
    struct empleado iEmp;
    int option;
    printf("\nNombre:");
    scanf(" %50[^\n]", iEmp.nombre);
    printf("Fecha de nacimiento (Formato DD/MM/AAAA):\n");
    scanf("%d/%d/%d", &iEmp.d, &iEmp.m, &iEmp.a);
    printf("Introduzca brevemente su nivel de estudios (Max. 40 caracteres):\n");
    scanf(" %40[^\n]", iEmp.estudios);
    printf("\nIntroduzca su puesto de trabajo (1=Oficinista, 2=Conductor, 3=Tecnico):\n\t");
    do{
        scanf("%d", &option);
        if(option<1||option>3) printf("\nError->1=Oficinista, 2=Conductor, 3=Tecnico");
    }while(option<1||option>3);
    switch (option) {
        case 1:
            strcpy(iEmp.puesto, "Oficinista");
            printf("\nNumero de telefono: ");
            for(int i = 0; i < 9; ++i) {
                scanf(" %c", &iEmp.infonum[i]);
            }
            break;
        case 2:
            strcpy(iEmp.puesto, "Conductor");
            printf("\nMatricula del vehiculo asignado (4Num,3Let): ");
            for(int i = 0; i < 7; ++i) {
                scanf(" %c", &iEmp.infonum[i]);
            }
            break;
        case 3:
            strcpy(iEmp.puesto, "Tecnico");
            printf("\nCodigo de barras del ordenador asignado: ");
            for(int i = 0; i < 9; ++i) {
                scanf(" %c", &iEmp.infonum[i]);
            }
            break;
        default:
            printf("Error");
    }
    return iEmp;
}

void escribirDatos(struct empleado iEmp){
    printf("\nNombre: %s", iEmp.nombre);
    printf("\nFecha de nacimiento: %d/%d/%d", iEmp.d, iEmp.m, iEmp.a);
    printf("\nPuesto: %s",iEmp.puesto);
    if(strcmp(iEmp.puesto,"Oficinista")==0) {
        printf("\nTfno: ");
        for(int i = 0; i < 9; ++i) {
            printf("%c", iEmp.infonum[i]);
        }
    }
    else if(strcmp(iEmp.puesto,"Conductor")==0){
        printf("\nMatricula: ");
        for(int i = 0; i < 7; ++i) {
            printf("%c", iEmp.infonum[i]);
        }
    }
    else{
        printf("\nCod. ordenador: ");
        for(int i = 0; i < 9; ++i) {
            printf("%c", iEmp.infonum[i]);
        }
    }
    printf("\nEstudios: %s",iEmp.estudios);
}

int main() {
    struct empleado plantilla[N];
    for(int i=0; i<N;++i) {
        printf("\nEmpleado %d:", i+1);
        plantilla[i]=leerDatos();
    }
    printf("\n");
    for(int i=0; i<N;++i) {
        printf("\nEmpleado %d:", i+1);
        escribirDatos(plantilla[i]);
        printf("\n");
    }
    return 0;
}
