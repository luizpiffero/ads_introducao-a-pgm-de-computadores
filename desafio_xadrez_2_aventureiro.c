#include <stdio.h>

int main(){

/*
Estácio ADS 1-25
Aluno: Luiz Gustavo Piffero
Desafio Xadrez Aventureiro

Você deverá implementar, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo. O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L". Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while, à sua escolha. Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

Entrada de Dados: Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) devem ser definidos no código como variáveis ou constantes.
 
Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados (um loop for e um loop while ou do-while).
 
Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. Para as outras peças as saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.
*/


//variaveis
int cont = 0, opcao = 0, h = 0;

//cabeçalho
printf("\n");
printf("================================\n");
printf("\n");
printf("==== Movimentação de Xadrez ====\n");
printf("\n");
printf("================================\n");
printf("\n");
//fimcabeçalho

//menuprincipal
printf("Selecione qual peça deseja movimentar:\n");
printf("------------------------------------------------------------------------");
printf("\n");
printf("1- Torre\n");
printf("2- Bispo\n");
printf("3- Rainha\n");
printf("4- Cavalo\n");
printf("\n");
printf("Opção: ");
scanf(" %d", &opcao);


switch (opcao)
{
case 1:
    //Torre - a torre deve mover 5 casas para a direita
    for (int i = 1; i <= 5; i++)
    {
        printf("Torre - Moveu para a Direita.\n");
    }
break;

case 2:
    //Bispo - o bispo deve mover na diagonal, andar 5 casas na diagonal
    while (cont < 5)
    {
        printf("Bispo - Moveu para a direita.\n");
        printf("Bispo - Moveu para cima.\n");
        cont = cont + 1;
    }
    
break;
    
case 3:
    //Rainha - a rainha se move em todas as direções, ela deve mover 8 casas para a esquerda
   do
   {
    printf("Rainha - Moveu para a esquerda.\n");
    cont = cont + 1;
   } while (cont < 8);
   
break;

case 4:
   //Cavalo - o cavalo se move em L

   for (int v = 1; v <= 1; v++)
   {
    printf ("Cavalo - Moveu uma casa para cima\n");

    do
    {
        printf("Cavalo - Moveu uma casa para a direita\n");
        h++;
    } while (h <= 1);
   }

break;

default:
    printf("Selecione uma opção válida.");
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