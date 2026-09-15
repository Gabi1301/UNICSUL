/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char tipoHospedagem;
    int quantidadeDiarias;
    float valorDiaria, valorTotal;
    
    printf("Qual o tipo de hospedagem (S - D - T)? ");
    scanf("%c",&tipoHospedagem);
    
    printf("Qual a quantidade de diárias? ");
    scanf("%d",&quantidadeDiarias);
    
    switch(tipoHospedagem){
        case 'S':
        case 's':
          valorDiaria = 300.0f;
          break;
          
        case 'D':
        case 'd':
          valorDiaria = 450.0f;
          break;
          
        case 'T':
        case 't':
          valorDiaria = 500.0f;
          break;
          
         default:
             printf("\n Tipo Inválido\n");
    }
    
    valorTotal = valorDiaria*quantidadeDiarias;
    
    printf("\n O valor total da Hospedagem é: R$%.2f", valorTotal);
    
    return 0;
}
