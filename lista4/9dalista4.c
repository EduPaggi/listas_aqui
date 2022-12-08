#include <stdio.h>
#include <stdlib.h>

#define num1 3
int main(){

    int vet[num1][num1], soma;

    printf("Popule o vetor de 9 posicoes \n");
    for( int i = 0; i < num1; i++){
        for( int j =0; j<num1; j++){
            scanf("%d", &vet[i][j]);

            if(j > 0 && i == 0){
                soma = soma + vet[i][j];
            }
            if(j > 1 && i == 1){
                soma = soma + vet[i][j];
            }
        }
    }
    printf("\nA soma total e de %d", soma);
}
