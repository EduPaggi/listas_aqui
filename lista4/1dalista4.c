#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 3

int main(){

    int mat[lin][col] = {{4, 5, 6}, {1, 10, 3}, {7, 8, 9}};
    int min = 0;

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(i == 0 && j == 0){
                min = mat[i][j];
            } else if(mat[i][j] < min)
                min = mat[i][j];
        }
    }
    printf("%d", min);
    return 0;
}
