#include <stdio.h>

int main(){

/*
Estruturas de repetição:asm

FOR

WHILE

DO-WHILE
*/

int a = 1, c = 1;

//while
while (a <= 5)
{
    printf("%d\n", a++);
}

//do-while
do
{
    printf("%d", c++);
} while (c <= 5);

//for
for (int i = 1; i <= 5; i++)
{
   printf("for %d\n", i);
}





return 0;
}