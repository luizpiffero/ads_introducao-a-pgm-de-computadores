#include <stdio.h>

int main(){

    //declaração da variável é "tipo nome;", exemplo "int idade;"
    /*
    
    - Tipos de dados definem os valores que as variáveis podem assumir ou armazenar:

    int = irá armazenar algum valor inteiro
    float = ponto flutuante, irá armazenar um número com casas decimais
    double = também armazena com casas decimais e armazena valores maiores que o float
    char = armazena caracteres, porém, temos que definir o tamanho da variável dentro de um array, exemplo:
        char nome[20] <- garante uma variável com 20 caracteres
    
    */

    //declaração de variáveis
    //Sempre importante inicializar a variável para garantir que, dentro da memória do computador, guarde um espaço e defina o valor naquele espaço, evitando acontecer uma execução inadequada.
    
    int idade = 10;
    float altura;
    double dobroAltura = 3.99;
    char letra = 'L';
    char nome[20] = "Luiz";

    //posso inicializar a variável daqui de baixo
    altura = 1.75;

    /*

    Sintaxe básica do printf = printf("texto com formatação", variavel1, variavel2, ...);
    
    Especificador de formato:

    %d: imprime um inteiro no formato decimal;
    %i: equivalente a %d;
    %f: imprime um numero de ponto flutuante no formato padrão - colocando %.2f ele irá exibir apenas 2 casas decimais, veja o double abaixo e compare com esse aqui;
    %e: imprime um numero de ponto flutuante na notação cientifica;
    %c: imprime um unico caractere;
    %s: imprime uma cadeia (string) de caracteres;

    */

    printf("===================================\n");
    printf("\n");
    printf("A idade do %s é de %d anos.\n", nome, idade);
    printf("A altura do %s é de %.2f metros.\n", nome, altura);
    printf("O 'double' da altura do %s é de %f.\n", nome, dobroAltura);
    printf("A letra declarada é %c.\n", letra);
    printf("O nome completo declarado é %s.\n", nome);
    printf("\n");
    printf("===================================\n");
    printf("\n");
    printf("O novo valor da idade é: ");
    // A linguagem C tem uma limitação na entrada de dados, ela reconhece o ENTER como um caractere, para suprir essa limitação, na leitura da entrada, colocar um espaço antes da declaração do especificador de formato.
    scanf(" %d", &idade);
    printf("A nova altura do %s será: ", nome);
    scanf(" %f ", altura);
    printf("\n");
    printf("Imprimindo os novos valores: Idade %d e altura %.2f", idade, altura);
    

}