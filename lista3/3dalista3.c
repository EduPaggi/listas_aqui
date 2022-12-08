#include <stdio.h>
#include <stdlib.h>

#define num1 5
int main(){

    int vet[num1], media;
    printf("Digite 5 valores \n");

    for(int i = 0; i < num1; i++){
        scanf("%d", &vet[i]);
        media = media + (vet[i] / num1 );
    }
    for( int i = 0; i < num1; i++){
        printf("%d ",vet[i]);
    }
    printf("\nA media e de %d",media);
}
