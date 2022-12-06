#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int uf = 0, val = 0;


    printf("Qual o valor do produto? ");
    scanf("%d", &val);
    printf("Escolha um estado:\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    scanf("%d", &uf);

    switch(uf)
    {
        case 1:
            printf("O valor a ser pago e de R$%f", val*1.07);
            break;
        case 2:
            printf("O valor a ser pago e de R$%f", val*1.12);
            break;
        case 3:
            printf("O valor a ser pago e de R$%f", val*1.15);
            break;
        case 4:
            printf("O valor a ser pago e de R$%f", val*1.08);
            break;
        default:
            printf("Estado inválido");
            break;

    }

}
