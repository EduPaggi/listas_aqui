#include <stdio.h>
#include <stdlib.h>

#define num 10
int main(){


    int vet1[num];
    int vet2[num];
    int vet3[num];

    printf("Digite os 10 valores do vetor 1: ");

    for(int i = 0; i < num; i++){
        scanf("%d", &vet1[i]);
    }

    printf("Digite os 10 valores do vetor 2: ");

    for(int j = 0; j <num; j++){
        scanf("%d", &vet2[j]);
    }
    for(int k = 0; k <num; k++){
        vet3[k] = vet1[k] - vet2[k];
    }
    printf("A subtracao do vetor 1 com o vetor 2 e igual a \n");
    for(int l = 0; l <num; l++){
        printf("%d  ", vet3[l]);
    }
}
