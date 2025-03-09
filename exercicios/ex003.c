#include <stdio.h>

int main(){

/*
3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/

char nome[20];
float salario;

printf("Programa de leitura de salário\n");
printf("\n");
printf("Digite o Nome do funcionário: ");
scanf(" %s", nome);
printf("Agora digite o Salário do funcionário: ");
scanf(" %f", &salario);
printf("\n");
printf("O salário do funcionário %s é de R$%.2f reaixx.", nome, salario);


return 0;    
}