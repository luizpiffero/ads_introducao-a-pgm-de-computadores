/*4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.*/

#include <stdio.h>

int main(){

int num1, num2, soma;

printf("\n");
printf("Programa de Soma");
printf("\n");
printf("Irei somar os dois números que você me fornecer");
printf("\n");
printf("Digite o número 1: ");
scanf(" %d", &num1);
printf("Agora digite o número 2: ");
scanf(" %d", &num2);

soma = num1 + num2;

printf("\n");
printf("A soma de %d + %d = %d", num1, num2, soma);

return 0;
}