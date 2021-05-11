
/*
Programa: Receber 10 números e informar quantos são ímpares e quantos são pares.
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
    //declaração de variável
    int numero, count_impar, count_par, n = 1;

    //inicializando as variáveis
    count_impar = 0;
    count_par = 0;


    while(n <= 10)
    {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero%2==1) count_impar++;
        else count_par++;
        n++;
    }

    printf("Números pares: %d \n", count_par);
    printf("Números ímpares: %d", count_impar);
    return 0;
}
