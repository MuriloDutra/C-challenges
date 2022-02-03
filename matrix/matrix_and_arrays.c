#include <stdio.h>

int main(){
    int numbers[5][10];

    int* line0 = numbers[0];
    int* line1 = numbers[1];
    int* line2 = numbers[2];
    int* line3 = numbers[3];
    int* line4 = numbers[4];

    // os numbers serao iguais, afinal
    // ambos ponteiros apontam para o mesmo 
    // endereço de memória
    printf("%d %d\n", line0, numbers[0]);
}
