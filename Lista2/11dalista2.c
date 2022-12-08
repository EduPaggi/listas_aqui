#include <stdio.h>
#include <stdlib.h>

int main() {

    int alg = 0, div;

    printf("Digite um numero ");
    scanf("%d", &alg);

    for(div = 1; div <= alg; div++){
        if(alg % div == 0){
            printf("Divisor: %d \n", div);
        }
    }
    return 0;
}

