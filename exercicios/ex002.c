#include <stdio.h>

int main(){

/*
2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!
*/

char nome[20];

printf("Olá, qual é o seu nome? ");
scanf (" %s", nome);

printf("\n");

printf("Prazer %s, muito bom te conhecer!\n", nome);

return 0;
}