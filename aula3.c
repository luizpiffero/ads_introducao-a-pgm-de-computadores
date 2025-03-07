#include <stdio.h>

int main(){

    char nome[20];
    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    printf("==========================\n");
    printf("\n");
    printf("CALCULADORA MÉDIA DO ALUNO\n");
    printf("\n");
    printf("==========================\n");
    printf("\n");
    printf("Esse programa foi desenvolvido para calcular a média do aluno, serão solicitados o NOME e duas NOTAS, no final irei gerar a média entre as duas NOTAS.\n");
    printf("\n");
    printf("Digite o nome do aluno: ");
    scanf(" %s", &nome);
    printf("Agora digite a primeira nota: ");
    scanf(" %f", &nota1);
    printf("Agora digite a segunda nota: ");
    scanf(" %f", &nota2);

    media = ((nota1 + nota2)/2);

    printf("O aluno %s, obteve a média %.1f.\n", nome, media);

    printf("=============================\n");
    printf("\n");
    printf("====== FIM DO PROGRAMA ======\n");
    printf("\n");
    printf("=============================\n");

return 0;
}