/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario[4];
    int i = 0;
    
    for(int i=0; i<4; i++){
    printf("Digite o salário do %d° funcionário: ", i+1);
    scanf("%f",&salario[i]);
    }
    
    for(int i=0; i<4; i++){
         printf("O funcionário %d: %.2f \n", i+1, salario[i]);
    }
    
    return 0;
}
