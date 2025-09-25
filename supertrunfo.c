#include <stdio.h>

//Estrutura de dados que irão representar as cartas do super trunfo
struct Carta {
    char estado[20], codigo[20], cidade[50];
    int populacao, turistico;
    float area, pib;

};

int main(){
    struct Carta carta1, carta2;
    
    
//Entrada de dados da carta 1
    printf("Cadastro carta 1\n");

    printf("Digite o estado: ");
    scanf("%s", carta1.estado);
    
    printf("Digite o codigo do estado: ");
    scanf("%s", carta1.codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", carta1.cidade);

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta1.turistico);

//Entrada de dados da carta 2
    printf("\nCadastro carta 2\n");

    printf("Digite o estado: ");
    scanf("%s", carta2.estado);
    
    printf("Digite o codigo do estado: ");
    scanf("%s", carta2.codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", carta2.cidade);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta2.turistico);

    
    printf("\nSUPER TRUNFO\n");
//Exibição dos dados da carta 1    
    printf("\nCarta 1\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$%.2f Bilhões de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.turistico);

//Exibição dos dados da carta 2    
    printf("\nCarta 2\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$%.2f Bilhões de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.turistico);


    return 0;






}
