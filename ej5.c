#include <stdio.h>
int main(){
    int e, b;
    printf("ingrese un número base y su exponente: ");
    scanf("%d %d", &b, &e);
    int t = b;
    while(e != 1){
        t = b * t;
        e--;
    }
    printf("%d\n", t);
}