#include <stdio.h>
int main(){
   int input;
   int cero= 0, negativo= 0, positivo=0, i = 1;
   while(i <= 10){
       printf("ingrese el numero %d: ", i);
       scanf("%d", &input);
       if(input > 0) positivo++;
       else if(input < 0) negativo++;
       else cero++;
       i++;
   }
   printf("ceros: %d, Positivos: %d, Negativos: %d", cero, positivo, negativo);
}
