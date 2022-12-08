#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, x;
    int div = 0;
    do {
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &x);
    } while (x <= 0);

    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            div++;
        }
    }

    if (div == 2){
    printf("O numero %d e primo!", x);
    }

    else{
    printf("O numero %d nao e primo!", x);
    }

    return 0;
}
