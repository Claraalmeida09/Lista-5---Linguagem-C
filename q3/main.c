/*
Programa: Receber a nota do aluno de 0 a 10.
Data de criação: 03/05/2021.
Autora: Maria Clara Almeida Souza
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // comando de regionalização
    setlocale(LC_ALL, "");
    //Declaração de variáveis - considerando que as notas são números inteiros
    int nota;

    do {
        printf("Digite uma nota válida: ");
        scanf("%d", &nota);
    } while(nota > 10 || nota < 0);
    printf("Nota registrada");

    return 0;
}
