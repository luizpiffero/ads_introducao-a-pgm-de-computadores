#include <stdio.h>
int main(){

int tabela[3][3], temp = 0, vetorAux[9];

//coleta os dados para preenchimento da tabela
for (int l = 0; l < 3; l++)
{
    for (int c = 0; c < 3; c++)
    {
        printf("Digite numero referente a posição [%d][%d]: ",l, c);
        scanf("%d", &tabela[l][c]);
    }
}
printf("\n");
//imprime do jeito que foi declarado
for (int l = 0; l < 3; l++)
{
    for (int c = 0; c < 3; c++)
    {
        printf("[%d] ", tabela[l][c]);
    }
    printf("\n");
}
//repassa os dados da matriz para o vetor
for (int l = 0; l < 3; l++)
{
    for (int c = 0; c < 3; c++)
    {
    vetorAux[temp] = tabela[l][c];    
    temp++;
    }
    printf("\n");
}
//organiza o vetor
for (int i = 0; i < 9-1; i++)
{
    for (int j = 0; j < 9-1; j++)
    {
        if (vetorAux[j] > vetorAux[j + 1])
        {
            temp = vetorAux[j];
            vetorAux[j] = vetorAux[j + 1];
            vetorAux[j + 1 ] = temp; 
        }
        
    }
    
}
//transfere de volta para a tabela os valores organizados
temp = 0;
for (int l = 0; l < 3; l++)
{
    for (int c = 0; c < 3; c++)
    {
        tabela[l][c] = vetorAux[temp];
        temp++;
    }
    
}

//imprime vetor do jeito organizado
for (int l = 0; l < 3; l++)
{
    for (int c = 0; c < 3; c++)
    {
        printf("[%d] ", tabela[l][c]);
    }
    printf("\n");
}



return 0;
}