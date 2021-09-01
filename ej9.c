#include <stdio.h>

int main(){
    int input;
    int mayor = 0;
    int i = 1; 
    while(i <= 20){
        printf("ingrese el sueldo del empleado %d: ", i);
        scanf("%d", &input);
        if(input > 2000) mayor++;
        i++;
    }
    printf("los que ganan mas de 2000 son %d, y los que ganan menos son %d", mayor, 20-mayor);
    return 0;
}
