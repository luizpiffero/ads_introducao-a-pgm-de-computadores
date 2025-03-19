#include <stdio.h>
int main(){

int tabela[3][3];

for (int c = 0; c < 3; c++)
{
    for (int l = 0; l < 3; l++)
    {
        printf("Digite numero: ");
        scanf("%d", &tabela[c][l]);
    }
    
}

for (int c = 0; c < 3; c++)
{
    for (int l = 0; l < 3; l++)
    {
        printf("[%d] ", tabela[c][l]);
    }
    printf("\n");
}



return 0;
}