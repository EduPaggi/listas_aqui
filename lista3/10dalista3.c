#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10] = {2, 2, 2, 10, 6, 5, 11, 15, 9, 1};

    for(int h = 0; h < 10; h++){
        printf("%d ", vet[h]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(vet[i] == vet[j]){
                printf("\nO valor %d se repete", vet[i]);
            }
        }
    }
}
