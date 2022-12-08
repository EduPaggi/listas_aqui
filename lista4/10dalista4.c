#include <stdio.h>
#include <stdlib.h>


int main(){

    int ma1[5][5];
    int ma2[5][5];
    printf("Popule a matriz \n");

    for( int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++){
            scanf("%d", &ma1[i][j]);
            ma2[i][j] = ma1[i][j] * 2;
        }
    }

    for( int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++){
            printf("%d \t", ma2[i][j]);
        }
        printf("\n");
    }
}
