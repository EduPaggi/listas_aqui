#include <stdio.h>
#include <stdlib.h>

#define num1 100
int main(){


    int vet[num1];
    for(int i = 0; i < 101; i++){
        if(i % 7 != 0){
            vet[i] = i;
        }
    }
    for(int j = 0; j <101; j++){
        if(j % 7 != 0){
            printf("%d ",vet[j]);
        }
    }
}
