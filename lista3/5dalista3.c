#include <stdio.h>
#include <stdlib.h>

#define num1 10
int main(){

    int vet[num1], par;
    printf("Digite os valores do array \n");

    for(int i = 0; i < num1; i++){
        scanf("%d", &vet[i]);
    }
    for(int j = 0; j < num1; j++){
        if(vet[j] % 2 == 0){
            par++;
        }
    }
printf("%d valores pares",par);
}
