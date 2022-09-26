#include <stdio.h>

#define N 5
void leerArray(int array[N]);
void fact(int num);

int main() {
    int nums[N];
    char array[N];
    leerArray(nums);
    for(int i=0;i<N; ++i){
        fact(nums[i]);
    }
    return 0;
}

void leerArray(int array[N]){
    printf("\nIntroduzca %d numeros enteros:", N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &array[i]);
    }
}

void fact(int num){
    int i=0, x=2, aux=num;
    int factorization[100]={0};
    while (i<100&&num!=1){
        if(num%x==0){
            factorization[i]=x;
            ++i;
            num/=x;
        }
        else ++x;
    }
    printf("\n%d\t", aux);
    for (int j=0; j<i; ++j) {
        printf(" %d", factorization[j]);
    }
    printf("\n");
}
