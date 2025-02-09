#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        char codigo[4];
        char estado[25];
        char cidade[25];
        int populacao;
        float area;
        float pib;
        int qtdptsturisticos;

            printf("Vamos iniciar o cadastro de cartas para o jogo Super Trunfo!\n");

            printf("Informe o código da carta (Estado uma letra e Cidade dois números)\n");
            scanf("%s", &codigo);
            
            printf("Informe o Estado\n");
            scanf("%s", &estado);
       
            printf("Informe o nome da Cidade\n");
            scanf("%s", &cidade);
            
            printf("População da ciadade\n");
            scanf("%d", &populacao);

            printf("Área da cidade\n");
            scanf("%f", &area);

            printf("PIB da ciadade\n");
            scanf("%f", &pib);

            printf("Quantidade de pontos turísticos\n");
            scanf("%d", &qtdptsturisticos);

                printf("Carta cadastrada com sucesso!\n\n");
                printf("DADOS DA CARTA CADASTRADA:\n");
                printf("CÓDIGO DA CARTA: %s\n", codigo);
                printf("ESTADO: %s\n", estado);
                printf("CIDADE: %s\n", cidade);
                printf("POPULAÇÃO: %d\n", populacao);
                printf("ÁREA: %2.f\n K²", area);
                printf("PIB: R$ %2.f\n", pib);
                printf("QUANTIDADE PONTOS TURISTICOS: %d\n\n", qtdptsturisticos);

    return 0;
}
