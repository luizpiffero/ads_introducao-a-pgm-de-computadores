#include <stdio.h>

int main(){

/*

 Estácio ADS 1-25
 Aluno: Luiz Gustavo Piffero
Desafio Super Trunfo nível Aventureiro

- Menu Interativo usando switch para o jogador escolher qual atributo quer comparar entre as duas cartas.
- Estrutura de decisão aninhada (if dentro de if), para comparação mais complexa, considerando as regras de cada atributo.

Irei reaproveitar o código anterior e aprimorar nessa versão.

*/

//declaração de variáveis
char pais1[30] = "";
char pais2[30] = "";
int populacao1 = 0;
int populacao2 = 0;
int numPontoTur1 = 0;
int numPontoTur2 = 0;
int opcao = 0;
float area1 = 0;
float area2 = 0;
float pib1 = 0;
float pib2 = 0;
float densDemo1 = 0;
float densDemo2 = 0;

//cabeçalho
printf("\n");
printf("===========================\n");
printf("\n");
printf("==== JOGO SUPER TRUNFO ====\n");
printf("\n");
printf("===========================\n");
printf("\n");
//fimcabeçalho

//menuprincipal
printf("Seja bem-vindo ao jogo Super Trunfo, selecione alguma das opções abaixo:\n");
printf("------------------------------------------------------------------------");
printf("\n");
printf("1- Iniciar um jogo novo\n");
printf("2- Ler as regras do jogo\n");
printf("Qualquer tecla: Sair do jogo\n");
printf("\n");
printf("Opção: ");
scanf(" %d", &opcao);

//Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.

switch (opcao)
{
case 1:
    //Iniciar um jogo novo
    printf("\n");
    printf("Iniciando um novo jogo...\n");
    printf("..........................\n");
    printf("\n");

    //cadastro primeira carta
    printf("Vamos cadastrar a primeira carta:\n");
    printf("\n");
    printf("Digite o nome do País: ");
    scanf(" %s", pais1);
    printf("Digite a População: ");
    scanf(" %d", &populacao1);
    printf("Digite a área do País (em Km2): ");
    scanf(" %f", &area1);
    printf("Digite o PIB do País (em bilhões de R$): ");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos túristicos que a cidade possui: ");
    scanf(" %d", &numPontoTur1);

    //calculo de Densidade Demográfica
    densDemo1 = populacao1 / area1;

    printf("\n");
    printf("Pronto! Carta 1 cadastrada.\n");
    printf("\n");

    //cadastro segunda carta
    printf("Vamos agora cadastrar a segunda carta: ");
    printf("\n");
    printf("Digite o nome do País: ");
    scanf(" %s", pais2);
    printf("Digite a População: ");
    scanf(" %d", &populacao2);
    printf("Digite a área do País (em Km2): ");
    scanf(" %f", &area2);
    printf("Digite o PIB do País (em bilhões de R$): ");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos túristicos que a cidade possui: ");
    scanf(" %d", &numPontoTur2);

    //calculo de Densidade Demográfica
    densDemo2 = populacao2 / area2;

    printf("\n");
    printf("Pronto! Carta 2 cadastrada.\n");
    printf("\n");

    printf("Ótimo, essas foram as duas cartas cadastradas: \n");
    printf("\n");

    //mostrar no terminal a carta 1
    printf("Carta 1:\n");
    printf("País: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Área do País: %.2f Km2\n", area1);
    printf("PIB do País: %.2f bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontoTur1);
    printf("Densidade demográfica: %.2f hab/km2", densDemo1);
    printf("\n");
    printf("\n");

    //mostrar no terminal a carta 2
    printf("Carta 2:\n");
    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área da Cidade: %.2f Km2\n", area2);
    printf("PIB da Cidade: %.2f bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontoTur2);
    printf("Densidade demográfica: %.2f hab/km2", densDemo2);
    printf("\n");
    printf("\n");

    //pergunta ao jogador qual atributo ele deseja comparar

    printf("Digite a opção equivalente ao atributo que deseja comparar: \n");
    printf("\n");
    printf("1- População\n");
    printf("2- Área do País\n");
    printf("3- PIB do País\n");
    printf("4- Número de Pontos Túristicos\n");
    printf("5- Densidade Demográfica\n");
    scanf(" %d", &opcao);

    switch (opcao){
    case 1:
        //comparação das populações
        printf("A População da carta 1 é: %d\n", populacao1);
        printf("A População da carta 2 é: %d\n", populacao2);
        printf("\n");
        
        if (populacao1 == populacao2){

            printf("Ambas possuem a mesma população, portanto, JOGO EMPATADO!\n");
 
         }   else if (populacao1 > populacao2){
 
                 printf("%s possui uma população maior que %s, portanto o VENCEDOR é %s!\n", pais1, pais2, pais1);
 
         }   else{
 
                 printf("%s possui uma população maior que %s, portanto o VENCEDOR é %s!\n", pais2, pais1, pais2); 
         }

        break;
    case 2:
        //comparação das áreas
        printf("A Área da carta 1 é: %2.f\n", area1);
        printf("A Área da carta 2 é: %2.f\n", area2);
        printf("\n");
        
        if (area1 == area2){

           printf("Ambas possuem a mesma área, portanto, JOGO EMPATADO!\n");

        }   else if (area1 > area2){

                printf("%s possui uma área maior que %s, portanto o VENCEDOR é %s!\n", pais1, pais2, pais1);

        }   else{

                printf("%s possui uma área maior que %s, portanto o VENCEDOR é %s!\n", pais2, pais1, pais2); 
        }

        break;
    case 3:
        //comparação dos pibs
        printf("O PIB da carta 1 é: %2.f\n", pib1);
        printf("O PIB da carta 2 é: %2.f\n", pib2);
        printf("\n");
        
        if (pib1 == pib2){

            printf("Ambas possuem o mesmo PIB, portanto, JOGO EMPATADO!\n");
 
         }   else if (pib1 > pib2){
 
                 printf("%s possui um PIB maior que %s, portanto o VENCEDOR é %s!\n", pais1, pais2, pais1);
 
         }   else{
 
                 printf("%s possui um PIB maior que %s, portanto o VENCEDOR é %s!\n", pais2, pais1, pais2); 
         }

        break;
    case 4:
        //comparação dos numeros de ptos turisticos
        printf("A quantidade de Pontos Túristicos da carta 1 é: %d\n", numPontoTur1);
        printf("A quantidade de Pontos Túristicos da carta 2 é: %d\n", numPontoTur2);
        printf("\n");
        
        if (numPontoTur1 == numPontoTur2){

            printf("Ambas possuem a mesma quantidade de Pontos Túriscticos, portanto, JOGO EMPATADO!\n");
 
         }   else if (numPontoTur1 > numPontoTur2){
 
                 printf("%s possui uma quantidade maior de Pontos Túristicos que %s, portanto o VENCEDOR é %s!\n", pais1, pais2, pais1);
 
         }   else{
 
                 printf("%s possui uma quantidade maior de Pontos Túristicos que %s, portanto o VENCEDOR é %s!\n", pais2, pais1, pais2); 
         }

        break;
    case 5:
        //comparação das densidades demograficas
        printf("A Densidade Demográfica da carta 1 é: %2.f\n", densDemo1);
        printf("A Densidade Demográfica da carta 2 é: %2.f\n", densDemo2);
        printf("\n");
        
        if (densDemo1 == densDemo2){

            printf("Ambas possuem a mesma Densidade Demográfica, portanto, JOGO EMPATADO!\n");
 
         }   else if (densDemo1 < densDemo2){
 
                 printf("%s possui uma Densidade Demográfica maior que %s, portanto o VENCEDOR é %s!\n", pais1, pais2, pais1);
 
         }   else{
 
                 printf("%s possui uma Densidade Demográfica maior que %s, portanto o VENCEDOR é %s!\n", pais2, pais1, pais2); 
         }

        break;
    default:

        printf("Opção digitada é inválida, encerrando o programa...\n");

        break;
    }
    break;
case 2:
    //Ler as regras do jogo
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("Carregando as regras do jogo, por favor aguarde...\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("As regras são simples: \n");
    printf("\n");
    printf("1- Você irá cadastrar duas cartas, uma de cada vez, com os seguintes atributos:\n");
    printf("\n");
    printf("   - Nome do País\n");
    printf("   - População\n");
    printf("   - Área que o País ocupa\n");
    printf("   - PIB do País\n");
    printf("   - Número de Pontos Túristicos\n");
    printf("\n");
    printf("2- O sistema irá computar todos os dados e calcular a Densidade Demográfica de cada país.\n");
    printf("\n");
    printf("3- Em seguida você escolhe o atributo que deseja comparar.\n");
    printf("\n");
    printf("4- Vence o jogador que tiver o maior atributo comparado ao outro, exceto a Densidade Demográfica, que vence quem tiver o menor número.\n");
        
    break;

default:
    break;
}




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