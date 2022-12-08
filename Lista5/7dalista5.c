#include <stdio.h>
#include <stdlib.h>

void numero(int* a){
    if(*a <= 0){
        *a = 0;
    } else if(*a > 0){
        *a = *a * 5;
    }

}


int main(){

    int num = 0;
    printf("Digite um numero ");
    scanf("%d", &num);
    numero(&num);
    printf("%d", num);

}

