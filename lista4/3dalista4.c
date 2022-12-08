#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5

int main(){

    int mat[lin][col] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                mat[i][j] = 0;
            } else if(i != j){
                mat[i][j] = 1;
            }
            printf("%d\t", mat[i][j]);
        }
    printf("\n");
    }
}
