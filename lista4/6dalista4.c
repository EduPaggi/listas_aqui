#include <stdio.h>
#include <stdlib.h>

#define num1 3
int main(){

    int vet[num1][num1], soma;
    printf("Popule o vetor \n");


    for(int i = 0; i < num1; i++){
        for( int j = 0; j < num1; j++){
            scanf("%d", &vet[i][j]);

            if(i == j){
                soma = soma + vet[i][j];
            }
        }
    }
    printf("A soma dos valores e de %d ", soma);
}
