#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n, a = 0;
    float media;

    for(i = 0; i < 10; i ++){
     printf("Informe o %dº numero: ", i + 1);
     scanf("%d", &n);
     a = a + n;
    }

    media = a / 10;
    printf("A media dos valores e: %f\n", media);

}
