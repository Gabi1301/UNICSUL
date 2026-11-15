#include <stdio.h>

int main() {
    int codigoCadete, etapa, pontos, total, continuar;
    float media;

    do {
        printf("===== MISSAO ORBITAL =====\n");
        printf("Codigo do cadete: ");
        scanf("%d", &codigoCadete);
        total = 0;

        for (etapa = 1; etapa <= 3; etapa++) {
            do {
                printf("Pontuacao da etapa %d: ", etapa);
                scanf("%d", &pontos);
                if (pontos < 0 || pontos > 100) {
                    printf("Valor invalido! Digite entre 0 e 100.\n");
                }
            } while (pontos < 0 || pontos > 100);

            total += pontos; 
        }

        media = total / 3.0;

        printf("\nRESULTADO\n");
        printf("Cadete: %d\n", codigoCadete);
        printf("Pontuacao total: %d pontos\n", total);
        printf("Media: %.2f\n", media);

        if (media >= 85.0) {
            printf("Classificacao: COMANDANTE DA MISSAO\n");
            printf("Treinamento concluido com excelencia.\n");
        } else if (media >= 70.0) {
            printf("Classificacao: PILOTO APROVADO\n");
            printf("Cadete autorizado para a missao.\n");
        } else if (media >= 50.0) {
            printf("Classificacao: CADETE EM RECUPERACAO\n");
            printf("Novo treinamento recomendado.\n");
        } else {
            printf("Classificacao: TREINAMENTO REINICIADO\n");
            printf("Cadete ainda nao autorizado.\n");
        }

        if (total == 300) {
            printf("PONTUACAO MAXIMA!\n");
        }

        printf("\nAvaliar outro cadete? 1-Sim | 0-Nao: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("Sistema encerrado.\n");
    return 0;
}