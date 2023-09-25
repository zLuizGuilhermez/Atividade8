#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int codigoCidade = 0, numeroVeiculos = 0, numeroAcidentes = 0, menorIndice = INT_MAX, maiorIndice = 0, retorno = 0, numeroVeiculosTotal = 0, contador = 0, veiculosFormula = 0, numeroAcidentesRs = 0, totalCidadesRS = 0, mediaRs = 0;
    char estado[3], nomenclaturaMenor[3], nomenclaturaMaior[3];

    do
    {
        contador++;
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigoCidade);
        printf("Digite a sigla do seu estado (2 caracteres): ");
        scanf("%2s", estado);
        printf("Numero de veículos de passeio na cidade no ano de 1992: ");
        scanf("%d", &numeroVeiculos);
        printf("Numero de acidentes de transito no ano de 1992: ");
        scanf("%d", &numeroAcidentes);

        if (numeroAcidentes < menorIndice)
        {
            menorIndice = numeroAcidentes;
            strcpy(nomenclaturaMenor, estado);
        }
        else if (numeroAcidentes > maiorIndice)
        {
            maiorIndice = numeroAcidentes;
            strcpy(nomenclaturaMaior, estado);
        }
        if (numeroVeiculos > 0)
        {
            numeroVeiculosTotal += numeroVeiculos;
        }
        if (strcmp(estado, "RS") || strcmp(estado, "rs"))
        {
            totalCidadesRS++;
            numeroAcidentesRs += numeroAcidentes;
        }

        printf("Quer adicionar outra cidade? 1 para sim / 0 para não: ");
        scanf("%d", &retorno);

    } while (retorno != 0);

    // a) Qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

    printf("O menor indice de acidentes de carro e: %d, e a cidade que pertence e: %s\n", menorIndice, nomenclaturaMenor);
    printf("O maior indice de acidentes de carro e: %d, e a cidade que pertence e: %s\n", maiorIndice, nomenclaturaMaior);

    // b) qual a média de veículos nas cidades brasileiras

    veiculosFormula = numeroVeiculosTotal / contador;

    printf("\nA media de veiculos nas cidades e: %d", veiculosFormula);

    // c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.

    mediaRs = numeroAcidentesRs / totalCidadesRS;
    printf("\na média de acidentes com vítimas entre as cidades do Rio Grande do Sul e:%d", mediaRs);

    return 0;
}
