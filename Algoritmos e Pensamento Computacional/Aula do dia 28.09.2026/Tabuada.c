/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    int numero, contador;
    
    printf("Digite o número da tabuada: ");
    scanf("%d", &numero);
    
    for(contador=1;contador<=10;contador++){
        printf("%d X %d = %d \n", numero, contador, numero*contador);
    }
    return 0;
}
    