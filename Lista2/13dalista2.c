#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0, maior = 0, quanti = 0, vez = 0;

    printf("Digite quantos numeros(de 1 a 999) quer escolher: ");
    scanf("%d", &vez);

    for(int i = 1; i <= vez; i++){

        printf("Digite um numero ");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
            quanti = quanti - quanti + 1;
        } else if(num <= maior){
            quanti = quanti + 1;
        }
    }
    printf("O maior numero foi %d e ele foi repetido %d vezes", maior, quanti);
}
