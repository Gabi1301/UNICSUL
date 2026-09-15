/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    float frequencia;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/2.0f;
    
    printf("Digite sua frequência: ");
    scanf("%f", &frequencia);
    
    if(frequencia>=75){
       if(media>=6){
           printf("Sua media foi %.2f - Você está aprovado!", media);
       }
        else{
            printf("Sua media foi %.2f - Você está reprovado!", media);
        }
    }
    else{
        printf("\nVocê foi reprovado por frequencia.");
    }

    return 0;
}
