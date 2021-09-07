#include <stdio.h>
int main(){
    int alumno = 1;
    int nota = 1;
    int ntotal = 0;
    int t = 0;
    int input;
    while(alumno <= 30){
        nota = 0;
        while(nota <= 10){
            printf("ingrese la nota %d del alumno %d: ", nota, alumno);
            scanf("%d", &input);
            ntotal += input;
            t += input;
            nota++;
        }
        printf("el promedio del alumno %d es %d", alumno, ntotal/10);
        ntotal = 0;
        alumno++;
    }
    printf("la es promedio total es %d", t/300);
    return 0;
}
