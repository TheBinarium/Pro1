#include <stdio.h>

void fillArray(int i, float array[i][24], float array2[24], float sumaDiaria[i]);
void printInfo(float array[7][24], const float array2[24], float mDiaria[7], float mSemanal);

int main() {
    float temperaturas[7][24], mHorarias[24], sumaDiaria[7], mDiaria[7], sSemanal=0, mSemanal;
    int i;
    printf("\nIntroduzca las temperaturas registradas durante un dia (00:00-23:00):\n");
    for (i = 0; i < 7; ++i) {
        switch(i) {
            case 0:
                printf("Lunes:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            case 1:
                printf("Martes:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            case 2:
                printf("Miercoles:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            case 3:
                printf("Jueves:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            case 4:
                printf("Viernes:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            case 5:
                printf("Sabado:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            case 6:
                printf("Domingo:\n");
                fillArray(i, temperaturas, mHorarias, sumaDiaria);
                break;
            default:
                printf("Error en el sistema (404)");
        }
        mDiaria[i]=sumaDiaria[i]/24;
        sSemanal+=mDiaria[i];
    }
    mSemanal=sSemanal/7;
    printInfo(temperaturas, mHorarias, mDiaria, mSemanal);
    return 0;
}

void fillArray(int i, float array[i][24], float array2[24], float sumaDiaria[i]){
    sumaDiaria[i]=0;
    for (int j = 0; j < 24; ++j) {
        scanf("%f", &array[i][j]);
        sumaDiaria[i]+=array[i][j];
        if(i==0){
            array2[j]=array[i][j];
        }
        else
            array2[j]+=array[i][j];
    }
}

void printInfo(float array[7][24], const float array2[24], float mDiaria[7], float mSemanal){
    for (int i = 0; i < 7 ; ++i) {
        printf("\n\nTemps. dia %d: ", i+1);
        for (int j = 0; j < 24; ++j) {
            printf("%.1f ", array[i][j]);
        }
        printf("\nMedia diaria: %.1f", mDiaria[i]);
    }
    printf("\n\nMedias horarias: ");
    for (int i = 0; i < 24; ++i)
        printf("%.1f ", array2[i]/7);
    printf("\n\nMedia semanal: %.1f\n\n", mSemanal);
}
