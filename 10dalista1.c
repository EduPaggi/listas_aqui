#include <stdio.h>
#include <stdlib.h.>

int main(){

    int num = 0;
    printf("Digite um numero ");
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("O numero e divisivel por 3\n");
    } if (num % 5 == 0){
        printf("O numero e divisivel por 5\n");
    } else if(num % 3 != 0 && num % 5 != 0){
        printf("O numero nao e divisivel por 3 e por 5");
    }


}
