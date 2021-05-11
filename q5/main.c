/*
Programa: Listar e determinar o total da compra.
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
    //declaração de variáveis
    float valorCompra;
    int compra = 0;

    printf("---------------------------\n");
    printf("-          Menu           -\n");
    printf("---------------------------\n");
    printf("1-   Sandiíche (R$ 6,00)  -\n");
    printf("2-     Suco (R$ 3,00)     -\n");
    printf("3- Refrigerante (R$ 2,50) -\n");
    printf("---------------------------\n");

    valorCompra = 0.0;

    printf("Digite o número do produto que deseja adicionar ao carrinho e 0 para finalizar a compra: \n");

    do
    {
        scanf("%d", &compra);
        if(compra == 1)
        {
            valorCompra += 6.00;
        }
        else if(compra == 2)
        {
            valorCompra += 3.00;
        }
        else if(compra == 3) {
            valorCompra += 2.50;
        }
    }
    while(compra > 0 && compra <= 3);
    printf("Valor total da compra: R$ %.2f", valorCompra);

    return 0;
}
