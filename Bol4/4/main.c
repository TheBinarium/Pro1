#include <stdio.h>

void asignarNombres(char *array[]);
void minMaxMediaArray(float array[], char *semana[], float *media, float *min, float *max, int *a, int *b);

int main() {
    char *nombreDias[7];
    float horasDias[7];
    float min, max, media=0;
    int diaMax, diaMin;
    asignarNombres(nombreDias);
    minMaxMediaArray(horasDias, nombreDias, &media, &min, &max, &diaMax, &diaMin);
    printf("\nEl dia que mas has estudiado ha sido el %s: %.2f horas.", nombreDias[diaMax], max);
    printf("\nEl dia que menos has estudiado ha sido el %s: %.2f horas.", nombreDias[diaMin], min);
    printf("\nMedia de horas semanales dedicadas al estudio: %.2f horas\n", media);
    return 0;
}

void asignarNombres(char *array[]){
    array[0]="Lunes";
    array[1]="Martes";
    array[2]="Miercoles";
    array[3]="Jueves";
    array[4]="Viernes";
    array[5]="Sabado";
    array[6]="Domingo";
}

void minMaxMediaArray(float array[], char *semana[],float *media, float *min, float *max, int *a, int *b){
    float suma=0;
    *max=0;
    *min=24;
    for(int i=0;i<7;i++){
        printf("\nHoras estudiadas el %s:", semana[i]);
        scanf("%f", &array[i]);
        suma+=array[i];
        if(array[i]>*max) *max=array[i];
        else if(array[i]<*min) *min=array[i];
    }
    for(int i=0;i<7;i++){
        if(array[i]==*max) *a=i;
        else if(array[i]==*min) *b=i;
    }
    *media=suma/7;
}
