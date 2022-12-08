#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 4

int main(){

    int mat[lin][col] = {{1, 1, 14, 13}, {12, 0, 120, 9}, {8, 7, 6, 5}, {4, 3, 2, 1}};
    int mai = 0, pos_i = 0  , pos_j = 0;

     for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(mai < mat[i][j]){
                mai = mat[i][j];
                pos_i = i;
                pos_j = j;
            }
        }
     }
    printf("Maior numero e: %d\n", mai);
    printf("Sua posicao na matriz e %d %d", pos_i, pos_j);

    return 0;
}
