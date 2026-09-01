/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int potencia, horas;
    float consumo;
    
    printf("Potência do equipamento (W)?: ");
    scanf("%d", &potencia);
    
    printf("Horas de uso por dia: ");
    scanf("%d", &horas);
    
    
    consumo = (potencia*horas*30)/1000;
    
    printf("Consumo mensal: %.2f kwh", consumo);
    
    return 0;
}