#include <stdio.h>
int main(){
    int input;
    int vendedor = 1, dia = 1, alto = 0, totalg = 0, total = 0;
    while(vendedor <= 20){
        dia = 0;
        total = 0;
        while(dia <= 15){
            printf("ingrese la cantidad de unidades vendidas en el dia %d del vendedor %d: ", dia, vendedor);
            scanf("%d", &input);
            total += input;
            totalg += input;
            if(alto < input)
                alto = input;
            dia++;
        }
        printf("el total de unidades vendidas por el vendedor %d es: %d", vendedor, total);
        vendedor++;
    }
    printf("el total de ventas es de %d\nla venta mas alta en un dia es de %d", totalg, alto);
    return 0;
}
