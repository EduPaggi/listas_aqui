#include <stdio.h>
#include <stdlib.h>

int main(){

    int le = 0, soma = 0;

    printf("Digite 10 numeros ");

    for(int cont = 0; cont <= 9; cont++){
        scanf("%d", &le);
        soma = soma + le;

    }
    printf("%d", soma);
}
