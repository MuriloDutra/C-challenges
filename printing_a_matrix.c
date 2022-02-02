#include <stdio.h>

void fill_matrix(int numbers[20][10]);

int main(){
    int numbers[20][10];
    numbers[0][0] = 10;
    
    fill_matrix(numbers);
    for(int line = 0; line < 20; line++){
        for(int column = 0; column < 10; column++){
            printf("%d", numbers[line][column]);
        }
        printf("\n");
    }
}

void fill_matrix(int numbers[20][10]){
    for(int line = 0; line < 20; line++){
        for(int column = 0; column < 10; column++){
            numbers[line][column] = 6;
        }
    }
}
