#include <stdio.h>
#include <stdlib.h>

int main(){
    int lines = 5;
    int columns = 10;
    int** matrix;

    matrix = malloc(sizeof(int*) * lines);
    for(int i = 0; i < 5; i++){
        matrix[i] = malloc(sizeof(int) * (columns + 1));
    }


    //CLEAN
    for(int i = 0; i < 5; i++){
        free(matrix[i]);
    }
    free(matrix);
}
