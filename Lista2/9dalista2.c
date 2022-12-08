#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero, maior, menor;
    int i;

    printf("Insira um numero inteiro: ");
    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    for(i=1; i<10; i++){
        printf("\nInsira o %d numero inteiro: ",i+1);
        scanf("%i", &numero);
     }

    if(numero > maior){
        maior = numero;
    }
    else if(numero < menor){
        menor = numero;
    }


    printf("\nO menor numero inserido e: %d", menor);
    printf("\nO maior numero inserido e: %d", maior);
}
