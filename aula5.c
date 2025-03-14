#include <stdio.h>

int main(){

//Operador ternário

int idade = 20;
char* resultado;

resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

printf("Resultado: %s\n", resultado);

return 0;
}