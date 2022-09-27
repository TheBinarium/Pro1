#include <stdio.h>

void solicitud(float *presupuesto, float gDiarios[7][3]);
void impression(const float *presupuesto, float gDiarios[7][3]);

int main() {
    float budget=0, daily[7][3];
    solicitud(&budget, daily);
    impression(&budget, daily);
    return 0;
}



void solicitud(float *presupuesto, float gDiarios[7][3]){
    char nombreAcceso[26];
    printf("\nIntroduzca su nombre de usuario: ");
    gets(nombreAcceso);
    printf("\nBienvenido %s, introduzca ahora el presupuesto semanal"
           " previsto para esta semana pasada: ", nombreAcceso);
    scanf("%f", presupuesto);
    for (int i=0; i<=6 ; i++) {
        switch(i) {
            case 0:
                printf("\nLunes:");
                break;
            case 1:
                printf("\nMartes:");
                break;
            case 2:
                printf("\nMiercoles:");
                break;
            case 3:
                printf("\nJueves:");
                break;
            case 4:
                printf("\nViernes:");
                break;
            case 5:
                printf("\nSabado:");
                break;
            case 6:
                printf("\nDomingo:");
                break;
            default:
                printf("\nError 403");
        }
        for(int j=0; j<=2; j++){
            switch(j) {
                case 0:
                    printf("\n\tTransporte: ");
                    break;
                case 1:
                    printf("\n\tAlimentacion: ");
                    break;
                case 2:
                    printf("\n\tOcio: ");
                    break;
                default:
                    printf("\nError 404");
            }
            scanf("%f", &gDiarios[i][j]);
        }
    }
}

void impression(const float *presupuesto, float gDiarios[7][3]){
    float totalGasto=0, gMedioDiario[3]={0,0,0}, porcPres[7], sumaDiarioPres[7]={0, 0, 0, 0, 0, 0, 0};
    int i, j;
    for(i=0;i<=6;i++){
        for(j=0;j<=2;j++){
            totalGasto+=gDiarios[i][j];
            gMedioDiario[j]+=gDiarios[i][j];
            sumaDiarioPres[i]+=gDiarios[i][j];
        }
    }
    for(i=0;i<=6;i++){
        porcPres[i]=(sumaDiarioPres[i]*100)/ *presupuesto;
    }
    for(i=0; i<=2; i++){
        gMedioDiario[i]/=7;
    }
    printf("\nGasto total semanal: %.2f", totalGasto);
    printf("\nGasto medio diario por conceptos:\n\tTransporte: %.2f"
           "\n\tAlimentacion: %.2f\n\tOcio: %.2f", gMedioDiario[0], gMedioDiario[1],
           gMedioDiario[2]);
    puts("");
    printf("Porcentaje de presupuesto semanal gastado cada dia: ");
    for(i=0;i<=6;i++){
        printf("\n\tDia %d: %.1f %%",(i+1),porcPres[i]);
    }
}