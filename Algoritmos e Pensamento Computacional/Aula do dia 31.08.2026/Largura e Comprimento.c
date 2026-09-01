/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    
    float largura, comprimento, area_total;
    float valor_unitario = 34.90;
    float caixas_necessarias, custo_total;
    
    printf("Qual a largura da área (em metros)? ");
    scanf("%f", &largura);
    
    printf("Qual o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);
    
    printf("Qual o valor de cada caixa? ");
    scanf("%f", &valor_unitario);
    
    area_total = largura * comprimento;
    
    caixas_necessarias = ceil(area_total/2.5);
    
    custo_total = caixas_necessarias * valor_unitario;
    
    
    printf("Área total a ser revestida: %.2f\n", area_total);
    
    printf("Quantidade de caixas necessárias: %.2f\n", caixas_necessarias);
    
    printf("Custo total da compra: %.2f\n", custo_total);
    
    return 0;
}