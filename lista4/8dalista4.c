#include <stdio.h>
#include <stdlib.h.>

int main(){

    int matriz[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j){
                matriz[i][j] = 3 * i * 2 - 1;
            } else if (i < j){
                matriz[i][j] = 2 * i + 7 * j - 2;
            } else {
                matriz[i][j] = 4 * i * 3 + 5 * j * 2 + 1;
            }
            printf("%d \t ", matriz[i][j]);
        }
        printf("\n");

    }
 return 0;
}
