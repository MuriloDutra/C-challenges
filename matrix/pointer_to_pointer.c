#include <stdio.h>

int main(){
    int numbers[5][10];
    int** copy = numbers;

    numbers[0][0] = 10;
    copy[0][0] = 10;
}
