#include <stdio.h>
#include <stdlib.h>
void soma_mais_vinte(int* num){
*num = *num + 20;
}
int main(){
    int x = 5;
    printf("Valor antes: %d\n", x);
    soma_mais_vinte(&x);
    printf("Valor depois: %d", x);
return 0;
}
