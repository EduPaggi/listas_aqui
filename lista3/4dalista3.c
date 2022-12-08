#include <stdio.h>
#include <stdlib.h>

#define num1 8
int main(){

int vet[num1], x, y, soma;

    printf("Popule o vetor ");

    for( int i = 0; i < num1; i++){
        scanf("%d",&vet[i]);
    }
    printf("Escolha dois numeros de 0 a 7 \n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("A soma dos valores nas posicoes e de %d", soma);


}
