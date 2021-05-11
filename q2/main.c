/*
Programa: Exibir a m�dia da idade dos pacientes.
Data de cria��o: 03/05/2021.
Autora: Maria Clara Almeida Souza
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // comando de regionaliza��o
    setlocale(LC_ALL, "");
    // declara��o de vari�veis
    int n, idade, aux;

    //inicializando a vari�vel n e aux
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


    printf("M�dia: %.d", aux/n);
    return 0;
}
