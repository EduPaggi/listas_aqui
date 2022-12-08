#include <stdio.h>
#include <stdlib.h>

#define num1 6
int main(){

    int vet[num1];
    printf("Digite seis valores inteiros \n");

    for( int i = 0; i < num1; i++){
        scanf("%d", &vet[i]);
    }
    for( int i = num1 - 1; i > -1; i--){
        printf("%d ",vet[i]);
    }
}
