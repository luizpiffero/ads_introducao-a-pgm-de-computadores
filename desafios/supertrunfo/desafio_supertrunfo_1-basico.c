#include <stdio.h>

int main(){

    /*
    Estácio ADS 1-25
    Aluno: Luiz Gustavo Piffero
    Desafio Super Trunfo nível Básico

    O desafio nível básico exige apenas que cadastremos duas cartas e as imprima no terminal.
    */

    //declaração de variáveis
    char estado1[30] = "";
    char codCarta1[30] = "";
    char nomeCidade1[30] = "";
    char estado2[30] = "";
    char codCarta2[30] = "";
    char nomeCidade2[30] = "";
    int populacao1 = 0;
    int populacao2 = 0;
    int numPontoTur1 = 0;
    int numPontoTur2 = 0;
    float area1 = 0;
    float area2 = 0;
    float pib1 = 0;
    float pib2 = 0;


    //cabeçalho
    printf("\n");
    printf("===========================\n");
    printf("\n");
    printf("==== JOGO SUPER TRUNFO ====\n");
    printf("\n");
    printf("===========================\n");
    printf("\n");
    //fimcabeçalho
   
    //programa
    printf("Nível Básico\n");
    printf("O jogo Super Trunfo compara características de cartas,\n");
    printf("neste nível básico iremos utilizar o tema Estados do Brasil.\n");
    printf("\n");
    
    //cadastro primeira carta
    printf("Vamos cadastrar a primeira carta:\n");
    printf("\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado1);
    printf("Digite o código da carta: ");
    scanf(" %s", codCarta1);
    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a População: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da Cidade (em Km2): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da Cidade (em bilhões de R$): ");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos túristicos que a cidade possui: ");
    scanf(" %d", &numPontoTur1);

    printf("\n");
    printf("Pronto! Carta 1 cadastrada.\n");
    printf("\n");

    //cadastro segunda carta
    printf("Vamos agora cadastrar a segunda carta: ");
    printf("\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado2);
    printf("Digite o código da carta: ");
    scanf(" %s", codCarta2);
    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a População: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da Cidade (em Km2): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da Cidade (em bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos túristicos que a cidade possui: ");
    scanf(" %d", &numPontoTur2);

    printf("\n");
    printf("Pronto! Carta 2 cadastrada.\n");
    printf("\n");

    printf("Ótimo, essas foram as duas cartas cadastradas: \n");
    printf("\n");

    //mostrar no terminal a carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área da Cidade: %.2f Km2\n", area1);
    printf("PIB da Cidade: %.2f bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontoTur1);
    printf("\n");
    printf("\n");

    //mostrar no terminal a carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área da Cidade: %.2f Km2\n", area2);
    printf("PIB da Cidade: %.2f bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontoTur2);
    printf("\n");
    printf("\n");
    
    //fimprograma

    //rodapé
    printf("\n");
    printf("=========================\n");
    printf("\n");
    printf("==== FIM DO PROGRAMA ====\n");
    printf("\n");
    printf("=========================\n");
    printf("\n");    
    //fimrodapé
    
return 0;
}