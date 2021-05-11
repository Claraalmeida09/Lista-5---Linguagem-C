/*
Programa: Receber a nota do aluno de 0 a 10.
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
    //Declara��o de vari�veis - considerando que as notas s�o n�meros inteiros
    int nota;

    do {
        printf("Digite uma nota v�lida: ");
        scanf("%d", &nota);
    } while(nota > 10 || nota < 0);
    printf("Nota registrada");

    return 0;
}
