
/*
Programa: Receber 10 n�meros e informar quantos s�o �mpares e quantos s�o pares.
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
    //declara��o de vari�vel
    int numero, count_impar, count_par, n = 1;

    //inicializando as vari�veis
    count_impar = 0;
    count_par = 0;


    while(n <= 10)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);
        if (numero%2==1) count_impar++;
        else count_par++;
        n++;
    }

    printf("N�meros pares: %d \n", count_par);
    printf("N�meros �mpares: %d", count_impar);
    return 0;
}
