/*
6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10
*/

#include <stdio.h>

int main(){

int numero;

printf("\n");
printf("Digite um número, irei falar seu antecessor e seu sucessor: ");
scanf(" %d", &numero);

printf("O antecessor desse número é o %d.\n", numero - 1);
printf("O sucessor desse número é o %d.\n", numero + 1);


return 0;
}