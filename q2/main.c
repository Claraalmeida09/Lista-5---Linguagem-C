/*
Programa: Exibir a média da idade dos pacientes.
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
    // declaração de variáveis
    int n, idade, aux;

    //inicializando a variável n e aux
    n = 0;
    aux = 0;

    printf("Informe as idades dos pacientes internados:\n");

    do
    {
        scanf("%d", &idade);
        aux += idade;
        if(idade > 0)
        {
            n++;
        }
    }
    while(idade > 0);


    printf("Média: %.d", aux/n);
    return 0;
}
