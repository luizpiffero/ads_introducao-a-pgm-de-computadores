#include <stdio.h>

int main(){

/*
Estácio ADS 1-25
Aluno: Luiz Gustavo Piffero
Desafio Xadrez Novato

Simular a movimentação de três peças, Torre, Bispo e Rainha. Para cada um, utilizar uma estrutura de repetição diferente.

*/

//variaveis
int cont = 0, opcao = 0;



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