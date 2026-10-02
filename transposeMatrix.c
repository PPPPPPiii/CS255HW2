#include<stdio.h>
#include<stdlib.h>

int** transposeMatrix(int** mtx, int r, int c){
    int** matrix = malloc(c * sizeof(int*));//int* important
    for(int i = 0;i<c ; i++){
        matrix[i] = malloc(r*sizeof(int));
    }

    for(int i = 0;i<r;i++){
        for(int j = 0; j< c;j++){
            matrix[j][i] = mtx[i][j];
        }
    }


    return matrix;
}
