#include <stdio.h>
#include <stdlib.h>

#define num1 4
int main(){

    int vet[num1][num1], conta;
    printf("Popule o vetor \n");

    for( int i = 0; i < num1; i++){
        for( int j = 0; j < num1; j++){
            scanf("%d", &vet[i][j]);

            if(vet[i][j] > 10){
                conta++;
            }
        }
    }
    printf("\nExistem %d valores acima de 10", conta);
}
