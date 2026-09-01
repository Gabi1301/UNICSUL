/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int produto1;
    int produto2;
    int quantidade;
    
    printf("Digite a quatidade de produtos recebida pela manhã: ");
    scanf("%d", &produto1);
    
    printf("Digite a quatidade de produtos recebida pela tarde: ");
    scanf("%d",  &produto2);
    
    quantidade = produto1 + produto2;
    
    printf("Total de produtos recebidos no dia é de: %d", quantidade);
    
    return 0;
}
