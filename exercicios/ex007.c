/*
7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666
*/

#include <stdio.h>

int main(){

float numero;

printf("\n");
printf("Digite um número, irei falar qual é o seu dobro e sua terça parte: ");
scanf(" %f", &numero);

printf("\n");
printf("O dobro de %.0f é %.0f.\n", numero, numero * 2);
printf("A terça parte de %.0f é %.2f.\n", numero, numero / 3);

return 0;
}