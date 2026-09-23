/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float media;
    float frequencia;

    printf("Digite a média final: ");
    scanf("%f", &media);
    
    printf("Digite o percentual de frequência: ");
    scanf("%f", &frequencia);

    if (frequencia < 75.0) {
        printf("Reprovado por falta.\n");
    } 
    else if (media < 6.0) {
        printf("Reprovado por nota.\n");
    } 
    else {
        printf("Aprovado.\n");
    }

    return 0;
}
