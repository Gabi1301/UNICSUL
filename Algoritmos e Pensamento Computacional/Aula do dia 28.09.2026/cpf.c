/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char cpf[11];
   double preco, totalCompra = 0.0;
   
   printf("Digite o CPF do cliente: ");
   scanf("%11s", cpf);
   
   do{
       printf("Digite o preço do produto ou 0 para finalizar: ");
       scanf("%lf", &preco);
       
       if (preco>0){
           
           totalCompra += preco;
       }
       
   }while(preco != 0);
   
   printf("\nCompra Encerrada!\n");
   printf("CPF: %s\n", cpf);
   printf("O total da compra foi: R$ %.2lf", totalCompra);
   
    return 0;
}
