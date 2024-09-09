//Exercício 3

//Importar bibliotecas
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<locale>

using namespace std;

//Principal
int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    // Preços médios das ações
    float preco_acao1 = 24.13;
    float preco_acao2 = 11.00;
    float preco_acao3 = 38.65;

    // Dividendos anuais por ação
    float dividendo_acao1 = 17.00;
    float dividendo_acao2 = 35.00;
    float dividendo_acao3 = 25.00;

    // Valor total a ser investido
    float total_investimento = 1000.00;

    // Quantidade de ações que podem ser compradas
    int qtd_acao1 = total_investimento / preco_acao1;
    int qtd_acao2 = total_investimento / preco_acao2;
    int qtd_acao3 = total_investimento / preco_acao3;

    // Cálculo do Dividend Yield
    float dy_acao1 = (dividendo_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendo_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendo_acao3 / preco_acao3) * 100;

    // Exibição dos resultados
    printf("Quantidade de Ação 1 que pode ser comprada: %d\n", qtd_acao1);
    printf("Quantidade de Ação 2 que pode ser comprada: %d\n", qtd_acao2);
    printf("Quantidade de Ação 3 que pode ser comprada: %d\n", qtd_acao3);

    printf("Dividend Yield da Ação 1: %.2f%%\n", dy_acao1);
    printf("Dividend Yield da Ação 2: %.2f%%\n", dy_acao2);
    printf("Dividend Yield da Ação 3: %.2f%%\n", dy_acao3);

    return 0;
}
