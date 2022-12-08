#include <stdio.h>
#include <stdlib.h>

#define num1 10
int main(){

    int vet[num1];
    int mai = 0, men;
    printf("Digite 10 valores \n");

    for(int i = 0; i < num1; i++){
        scanf("%d", &vet[i]);
        if(vet[i] > mai){
            mai = vet[i];
        }
        if(vet[i] < men){
            men = vet[i];
        }
    }
    printf("\nMaior: %d\nMenor: %d", mai, men);




}
