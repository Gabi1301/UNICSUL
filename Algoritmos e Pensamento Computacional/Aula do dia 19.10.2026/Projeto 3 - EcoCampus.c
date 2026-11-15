/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main() {
    FILE *arquivo, *relatorio;
    char local[50], maiorLocal[50];
    float consumo, limite, total = 0, maior = 0;
    int quantidade = 0, acima = 0;

    arquivo = fopen("consumo_campus.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    relatorio = fopen("relatorio_consumo.txt", "w");

    if (relatorio == NULL) {
        printf("Erro ao criar o relatorio!\n");
        fclose(arquivo);
        return 1;
    }

    while (fscanf(arquivo, "%49s %f %f",
                  local, &consumo, &limite) == 3) {

        total += consumo;
        quantidade++;

        if (quantidade == 1 || consumo > maior) {
            maior = consumo;
            sprintf(maiorLocal, "%s", local);
        }

        if (consumo > limite) {
            acima++;
        }
    }

    printf("Locais analisados: %d\n", quantidade);
    printf("Consumo total: %.2f litros\n", total);

    if (quantidade > 0) {
        printf("Consumo medio: %.2f litros\n", total / quantidade);
        printf("Maior consumo: %.2f litros\n", maior);
        printf("Local com maior consumo: %s\n", maiorLocal);
    } else {
        printf("Nao existem registros no arquivo.\n");
    }

    printf("Locais acima do limite: %d\n", acima);

    fprintf(relatorio, "Locais analisados: %d\n", quantidade);
    fprintf(relatorio, "Consumo total: %.2f litros\n", total);

    if (quantidade > 0) {
        fprintf(relatorio, "Consumo medio: %.2f litros\n",
                total / quantidade);
        fprintf(relatorio, "Maior consumo: %.2f litros\n", maior);
        fprintf(relatorio, "Local com maior consumo: %s\n", maiorLocal);
    } else {
        fprintf(relatorio, "Nao existem registros no arquivo.\n");
    }

    fprintf(relatorio, "Locais acima do limite: %d\n", acima);

    fclose(arquivo);
    fclose(relatorio);

    return 0;
}
