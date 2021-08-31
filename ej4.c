#include <stdio.h>
int main(){
    int b;
    int f= 1;
    scanf("%d", &b);
    while(b > 0){
        f = b *f;
        b--;
    }
    printf("%d", f);
}