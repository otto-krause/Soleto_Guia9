#include <stdio.h>
int main(){
    int i = 1;
    int input;
    int total = 0;
    int higher = 0;
    while (i <= 15){
        printf("%d: ingrese un numero: ", i);
        scanf("%d", &input);
        total += input;
        if(input > higher)
            higher = input;
        i++;
    }
    printf("el promedio es %d, el valor más alto es %d.\n", total/15, higher);
    return 0;
}