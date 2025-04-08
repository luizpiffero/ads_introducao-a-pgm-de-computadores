
/*
Estácio ADS 1-25
Aluno: Luiz Gustavo Piffero
Desafio Batalha Naval - Aventureiro

Imprimir o tabuleiro e imprimir os navios no tabuleiro, um na vertical, um na horizontal, outros dois em cada diagonal.

*/

#include <stdio.h>

int main(){

//variáveis
int inserir = 0;
char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int coluna[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
int tabuleiro[10][10];

//gera tabuleiro todo com valor 0
for (int l = 0; l < 10; l++)
{
    for (int c = 0; c < 10; c++)
    {
        tabuleiro[l][c] = 0;
    }        
}

//mostra tabuleiro na tela
for (int l = 0; l < 11; l++)
{ 
    for (int c = 0; c < 11; c++)
    { 
        if (l == 0)
        {

            printf("   ");
            printf("%c", linha[c]);

        } 
        else if (c == 0)
        {
            if (l > 1)
            {
                printf("\n");
            }
            printf("\n");
            printf("%d", coluna[l-1]);
        } else
        {
            printf("  %d ", tabuleiro[l-1][c-1]);
        }
    }
}

printf("\n");

//este comando de input serve apenas para ter uma quebra entre a matriz vazia e a matriz preenchida, não tem função alguma
printf("\n");
printf("Para inserir os navios pressione 1: ");
scanf("%d", &inserir);

printf("\n");

//insere navio 1 = horizontal
for (int l = 6; l < 9; l++)
{
    tabuleiro[2][l] = 3;
}

//insere navio 2 = vertical
for (int c = 2; c < 5; c++)
{
    tabuleiro[c][4] = 3;
}

//insere navio 3 = diagonal principal
for (int i = 6; i < 9; i++)
{
    tabuleiro[i][] = 3;
}

//insere navio 4 = diagonal contrária
/*for (int i = 0; i < count; i++)
{
   
}
*/
//mostra tabuleiro na tela com os dois navios pré definidos inseridos
for (int l = 0; l < 11; l++)
{ 
    for (int c = 0; c < 11; c++)
    { 
        if (l == 0)
        {

            printf("   ");
            printf("%c", linha[c]);

        } 
        else if (c == 0)
        {
            if (l > 1)
            {
                printf("\n");
            }
            printf("\n");
            printf("%d", coluna[l-1]);
        } else
        {
            printf("  %d ", tabuleiro[l-1][c-1]);
        }
    }
}

return 0;    
}