#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1, num2, op, resul;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o operador\n");
    printf("(+ = 1) \n(- = 2) \n(* = 3)\n(/ = 4)\n ");
    scanf("%d", &op);

    switch(op){

        case 1:
            resul = num1 + num2;
            printf("A soma de %d com %d e igual a %d", num1, num2, resul);
    }

    return 0;

}
