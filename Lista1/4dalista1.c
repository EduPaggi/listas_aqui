#include <stdio.h>
#include <stdlib.h.>

int main(){
    int sal = 0, pres = 0;

    printf("Digite o seu salario ");
    scanf("%d", &sal);
    printf("Digite o valor da prestacao ");
    scanf("%d", &pres);

    if(pres < sal * 0.2){
        printf("Emprestimo concedido");
    } else {
    printf("Emprestimo nao concedido");
    }
}
