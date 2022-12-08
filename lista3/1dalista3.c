#include <stdio.h>
#include <stdlib.h>

#define ind 6
int main(){

    int vet[ind];
    printf("Escreva os valores \n");

    for(int i = 0; i < ind; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < ind; i++){
        printf("%d, ",vet[i]);
    }
}
