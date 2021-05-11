/*
Programa: Exibir o peso dos elementos em kg.
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
    //Declaração de variáveis
    float peso;
    int count;

    printf("Informe o peso do elemento em kg:");
    scanf("%f", &peso);

    //inicializando a variável
    count = 0;
    while (peso > 1)
    {
        printf("Peso atual: %.2f \n", peso/=2);
        count++;
    }
    printf("%d vezes", count);

    return 0;
}
