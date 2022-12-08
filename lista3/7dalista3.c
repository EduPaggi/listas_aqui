#include <stdio.h>
#include <stdlib.h>

#define num1 10
int main(){

    int vet[num1];
    int a, b;
    printf("Digite os valores ");

    for(int i = 0; i < num1; i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 0){
            a++;
        }
        if(vet[i] > 0){
            b = b + vet[i];
        }
    }
    printf("\nQuantidade de negativos: %d \nSoma dos valores positivos %d", a, b);



}
