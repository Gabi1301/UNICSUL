/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int horas = 12;
    int minutos = 45;
    int total_horas;
    
    total_horas= (horas *60) + minutos;
    
    printf("Já se passaram %d desde o inicio do dia", total_horas);
    
    return 0;
}