// PROGRAMA HECHO POR ALEJANDRO J. HERRERO ARANGO

#include <stdio.h>
#include <stdbool.h>

#define OPCION_1 'e'
#define OPCION_2 'i'
#define SALIR 't'
#define TITULO "PROGRAMA PARA UTILIZAR MENU ITERATIVO"


void pausar();

void explicarPrograma();

void gestionarPrograma();

void mostrarMenu();

char opcionSeleccionada();

char minuscula(char caracter);

int alturaTriRect(char *letra);

void dibujarTriRect(int alt, char ch);


int main() {
    explicarPrograma();
    pausar();
    gestionarPrograma();
    return 0;
}


void gestionarPrograma() {
    bool seguir = true;
    int altura = 10;
    char letra = '@';
    do {
        mostrarMenu();
        switch (minuscula(opcionSeleccionada())) {
            case OPCION_1:
                printf("Ha elegido la opcion %c\n", OPCION_1);
                altura=alturaTriRect(&letra);
                pausar();
                break;
            case OPCION_2:
                printf("Ha elegido la opcion %c\n", OPCION_2);
                dibujarTriRect(altura, letra);
                pausar();
                break;
            case SALIR:
                printf("Ha elegido la opcion %c\n", SALIR);
                seguir = false;
                puts("          FIN del PROGRAMA ");
                puts("Gracias por confiar en nosotros (Es decir, en mi)");
                puts("Esperemos que el creador de este programa, Alejandro");
                puts("J., apruebe, al menos este examen.");
                puts("________________________________________________");
                break;
            default:
                printf("\tERROR: Opcion no valida (elija: %c, %c, %c)", OPCION_1, OPCION_2, SALIR);
                break;
        }
    } while (seguir);
}


void explicarPrograma() {
    puts("\nEste programa permite ver como funciona un menu iterativo con tres opciones.\n"
         "\n\tLa opcion E) Permite que el usuario introduzca un entero en el rango [5, 20] y un\n"
         "caracter imprimible.\n"
         "\n\tLa opcion I) Imprime un triangulo rectangulo con el caracter y altura obtenidos\n"
         "en la anterior opcion (Por defecto, altura=10, caracter=@).\n"
         "\n\tLa opcion T) El usuario decide terminar la ejecucion del menu.\n");
}


char opcionSeleccionada() {
    char opcion;
    printf("Por favor, seleccione una opcion de las permitidas (%c, %c, %c):\t", OPCION_1, OPCION_2, SALIR);
    scanf(" %c", &opcion);
    return opcion;
}


void pausar() {
    printf("\nPulse la tecla ENTER para continuar...\n");
    getchar();
}


void mostrarMenu() {
    puts("\n________________________________________________");
    printf("%s\n", TITULO);
    printf("%c) Opcion %c\n", OPCION_1, OPCION_1);
    printf("%c) Opcion %c\n", OPCION_2, OPCION_2);
    printf("%c) Salir\n", SALIR);
}


char minuscula(char caracter) {
    char aux = caracter;
    if (caracter >= 'A' && caracter <= 'Z') aux = 'a' + caracter - 'A';
    return aux;
}


int alturaTriRect(char *letra){
    int alt;
    do {
        printf("Introduzca un entero positivo en el rango [5,20]:");
        scanf("%d", &alt);
    } while (alt<5 || alt>20);
    do {
        printf("Introduzca una letra para dibujar el triangulo:");
        scanf("%c", letra);
    } while (!(*letra>='A' && *letra<='Z') && !(*letra>='a'&& *letra<='z'));
    return alt;
}


void dibujarTriRect(int alt, char ch){
    int i, j, k=1;
    for(i=0; i<=alt; i++){
        for(j=0; j<=alt; j++){
            if(j<=(alt-k)) printf("  ");
            else if(j==alt) printf("\n");
            else printf("%c ", ch);
        }
        k+=1;
    }
}
