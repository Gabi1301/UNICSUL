/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    int rodada = 1;
    int pontuação;
    int total = 0;
    
    while(rodada <=3){
        printf("Digite os pontos da rodada %d:", rodada);
        scanf("%d", &pontuação);
        
        rodada++;
        total = total + pontuação;
    }
    
    printf("O valor total de pontos é: %d", total);
    return 0;
}
    
   
