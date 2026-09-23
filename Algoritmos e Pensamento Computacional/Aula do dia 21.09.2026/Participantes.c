/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    int participantes;
  
    do{
       printf("Digite o número de participantes: ");
    scanf("%d", &participantes);
    }while(participantes <1 || participantes > 3);
    
    printf("Equipe registrada com %d participantes. \n", participantes);
    
    return 0;
}
    
   
