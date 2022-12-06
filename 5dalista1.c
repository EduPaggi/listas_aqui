#include <stdio.h>
#include <stdlib.h.>
#include <math.h>

int main(){
    int x = 0, qua = 0, raiz = 0;


    printf("Digite um número ");
    scanf("%d", &x);

    if(x > 0){
        printf("O quadrado do numero e igual a %f \n ", pow(x, 2));
        printf("A raiz quadrada do numero e %f", sqrt(x));


    }
}
