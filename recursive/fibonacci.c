#include <stdio.h>

void fibonacci(int first_number, int second_number, int quantity);

int main(){
    fibonacci(0, 1, 10);
}

void fibonacci(int first_number, int second_number, int quantity){
    if(quantity == 0){
        printf("\n");
        return;
    }

    int result = (first_number + second_number);

    if(quantity == 10)
        printf("%d %d ", first_number, second_number);
    printf("%d ", result);
    fibonacci(second_number, result, quantity - 1);
}
