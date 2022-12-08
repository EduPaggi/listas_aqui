#include <stdio.h>
#include <stdlib.h>

#define num1 3
void main(){

    int vet[num1][num1], soma = 0;
    printf("Popule o vetor \n");

    for( int i = 0; i < num1; i++){
        for( int j = 0; j < num1; j++){
            scanf("%d", &vet[i][j]);

            if(i + j == 2){
                soma = soma + vet[i][j];
            }
        }
    }
    printf("A soma total e de %d ", soma);
}
