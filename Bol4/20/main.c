#include <stdio.h>

#define MAX_CHARS 30
#define NO_ALUMNOS 15

typedef struct alumno{
    char name[MAX_CHARS];
    float nota;
}tAlumno;

tAlumno leerAlumno();

int main() {
    tAlumno clase[NO_ALUMNOS];
    int max=0, min=0;
    clase[0]=leerAlumno();
    for(int i=1;i<NO_ALUMNOS;i++){
        clase[i]=leerAlumno();
        if(clase[i].nota>clase[max].nota) max=i;
        else if(clase[i].nota<clase[min].nota) min=i;
    }
    printf("\nMejor estudiante: %s | %.2f", clase[max].name, clase[max].nota);
    printf("\nPeor estudiante: %s | %.2f", clase[min].name, clase[min].nota);
    printf("\n\nResto:");
    for(int i=0;i<NO_ALUMNOS;i++){
        if(i==max||i==min) continue;
        printf("\n\t%s | %.2f", clase[i].name, clase[i].nota);
    }
    printf("\n");
}

tAlumno leerAlumno(){
    tAlumno iAlumno;
    printf("\nIntroduce el nombre del estudiante (Max. %d): ", MAX_CHARS);
    scanf("%s", iAlumno.name);
    printf("\nNota: ");
    scanf("%f", &iAlumno.nota);
    return iAlumno;
}
