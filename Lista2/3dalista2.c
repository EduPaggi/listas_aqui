#include<stdio.h>
#include<stdlib.h>
int main(){

    int num1;
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    for (int i = 0; i <= num1; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
        } else{}
    }
}
