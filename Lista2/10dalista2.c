#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, a = 0;
    float m = 0;
    printf("Digite 10 numeros inteiros positivos: ");
    for (i = 1; i <= 10; i++){
        scanf("%d", &n);
        while(n<=0){
        printf("Numero nao positivo. \n%d ", i);
        scanf("%d", &n);
        }
    a = a+n;
    }
    m = a/10;
    printf("\n A media dos numeros e %f", m);
    return 0;
}
