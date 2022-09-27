#include <stdio.h>

int main() {
    float temperaturas[24];
    float max=0, min=0, media, suma=0;
    printf("\nIntroduzca las temperaturas registradas durante un dia (00:00-23:00):\n");
    for (int i = 0; i < 24; ++i) {
        scanf("%f", &temperaturas[i]);
        }
    printf("Las temperaturas introducidas son:\n");
    for (int i = 0; i < 24; ++i) {
        printf("%.1f ", temperaturas[i]);
        suma+=temperaturas[i];
        if(temperaturas[i]>max) max=temperaturas[i];
        if(temperaturas[i]<min) min=temperaturas[i];
    }
    media=suma/24;
    printf("\nTemperatura maxima: %.1f\nTemperatura minima: %.1f"
           "\nTemperatura media: %.1f\n", max, min, media);
    return 0;
}
