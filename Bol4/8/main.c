#include <stdio.h>
#include <stdbool.h>

void getArray(int aux[], int *n);
void gestionBucle(int *buscado, int len, int array[]);
void secSearch(int search, int len, const int array[]);

int main(void) {
    int n, a[25], buscado;
    getArray(a,&n);
    gestionBucle(&buscado, n, a);
    return 0;
}

void getArray(int aux[], int *n){
    int i=0;
    printf("\nIntroduzca los elementos del array de enteros (Max. 25) separados "
           "por espacios, <enter> para terminar: ");
    while (getchar()!='\n'&& i<25){   // AL USAR GETCHAR NECESITA QUE EL PRIMER ELEMENTO SEA UN ESPACIO
        scanf("%d", &aux[i]);  // PARA SABER QUE NO ES UN '\N'
        i+=1;
    }
    *n=i;
}

void secSearch(int search, int len, const int array[]){
    int indice=0, cont=0, primUlt[2];
    while(indice<len) {
        if(array[indice]==search){
            cont+=1;
            if(cont==1) {
                primUlt[0]=indice+1;
            }
            primUlt[1]=indice+1;
        }
        indice++;
    }
    if(indice<=len) printf("\nEl numero %d aparece por primera vez en la posicion %d y "
                           "por ultima vez en la posicion %d\n", search, primUlt[0], primUlt[1]);
    else printf("\nEl numero %d no aparece en el array.\n", search);
}

void gestionBucle(int *buscado, int len, int array[]){
    bool seguir=true;
    while(seguir) {
        printf("\n-Pulse ENTER para realizar una busqueda\n-Pulse otra tecla+ENTER para salir "
               "del programa");
        getchar();    //VUELVE A PASAR LO MISMO NECESITA UN ESPACIO ANTES (CONCLUSION, NO SE COMO USAR EL GETCHAR)
        if (getchar() == '\n') {
            printf("\n\tIntroduzca el numero que desea buscar: ");
            scanf("%d", buscado);
            secSearch(*buscado, len, array);
        } else
            seguir = false;
    }
}

