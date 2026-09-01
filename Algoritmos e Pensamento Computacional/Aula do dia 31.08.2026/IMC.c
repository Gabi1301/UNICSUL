/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int peso;
    float altura, imc;
    
    printf("Qual o peso da pessoa em kg?: ");
    scanf("%d", &peso);
    
    printf("Qual a altura da pessoa em metros?: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("O indice de IMC é: %.2f", imc);
    
    return 0;
}