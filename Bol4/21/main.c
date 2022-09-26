#include <stdio.h>

#define MONTH 15
#define ANO "Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"
#define MAX_CHARS 35

typedef struct agenda{
    char mes[12][MONTH];
    int dia[31];
    char tareas[MAX_CHARS];
}tAgenda;

int elegirAccion();
void escribir(tAgenda *a);
void ver(tAgenda a);

int main() {
    int tarea[12][31][20][MAX_CHARS];
    return 0;
}

int elegirAccion(){
    int n;
    char aux;
    printf("\nDesea visualizar('V') un dia o introducir('I') una nueva tarea? "
           "(Para salir->'S'):");
    do {
        scanf("%c", &aux);
        if(aux!='V'&&aux!='I'&&aux!='S') printf("\n(Recuerde: Solo puede elegir "
                                                "V(VER DIA), I(NUEVA TAREA) o S(SALIR))\n");
    } while(aux!='V'&&aux!='I'&&aux!='S');
    switch (aux) {
        case 'S':
            n=0;
            break;
        case 'V':
            n=1;
            break;
        case 'I':
            n=2;
            break;
        default:
            n=0;
            printf("\nERROR 404\n");
    }
    return n;
}
