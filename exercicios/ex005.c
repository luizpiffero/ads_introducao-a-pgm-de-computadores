/*
5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5
*/

#include <stdio.h>

int main(){

float nota1, nota2, media;

printf("\n");
printf("Calculadora de Média");
printf("\n");

printf("Digite a nota 1: ");
scanf (" %f", &nota1);

printf("Agora, digite a nota 2: ");
scanf (" %f", &nota2);

media = (nota1 + nota2)/2;

printf("\n");
printf("Tirando a média dos números %.1f e %.1f, a média do aluno foi %.1f", nota1, nota2, media);

return 0;
}