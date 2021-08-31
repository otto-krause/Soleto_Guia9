#include <stdio.h>
int main(){
    printf("ingrese dos números: ");
    int a,b;
    scanf("%d %d",&a,&b);
    if(b > a){
        int f = a;
        a = b;
        b = f;
    }
    b += 1;
    while(b < a){
        printf("%d", b);
        b++;
    }
}