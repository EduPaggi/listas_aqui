#include <stdio.h>
#include <stdlib.h>
int maior(int num3,int num4){

    if(num3 > num4){
        return num3;
    } else if(num3 < num4){
        return num4;
    }
}

int main(){

    int num1, num2;
    printf("Digite um valor \n");
    scanf("%d,", &num1);
    printf("Digite outro valor \n");
    scanf("%d,", &num2);
    printf("O maior entre os dois valores e %d", maior(num1, num2));

}
