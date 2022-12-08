#include <stdio.h>
#include <stdlib.h>
int fahcel(int fahrenheit){
    return(fahrenheit - 32.0) * (5.0/9.0);

}
int main(){

    int fah, cel;
    printf("Informe o valor em Fahrenheit: \n");
    scanf("%d", &fah);
    cel = fah;
    printf("Valor em Fahrenheit: %d\n", fah);
    printf("Valor em Celsius: %d\n", fahcel(cel));
    return 0;
}

