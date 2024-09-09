/*
//EXERCÍCIO 2

//Importar biblioteca
#include<stdio.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    int num1, num2, num3;

    //Leituras dos três números

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Impressão dos números na ordem inversa
    printf("Os números na ordem inversa são: %d, %d, %d\n", num3, num2, num1);

    return 0;
}
*/

/*
//EXERCÍCIO B

//Importar biblioteca
#include<stdio.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    char nome[50];

    printf("Olá eu sou o Nº 1, como é seu nome?\n");
    scanf("%d", nome);
    printf("Bem-vindo ao clube %d\n", nome);

    return 0;
}
*/

/*
//EXERCÍCIO C

//Importar biblioteca
#include<stdio.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    char nome[50];
    int idade;
    int diasDeVida;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    diasDeVida = idade * 365; // Aproximando que cada ano tem 365 dias

    printf("Olá %s, você tem aproximadamente %d dias de vida.\n", nome, diasDeVida);

    return 0;
}
*/

/*
//EXERCÍCIO D

//Importar biblioteca
#include<stdio.h>
#include<locale>
#define PI 3.14159

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    float raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
*/

/*
//EXERCÍCIO E

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    float largura, altura, area, litrosNecessarios, latasNecessarias;

    // Pergunta as medidas da parede
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    // Calcula a área da parede
    area = largura * altura;

    // Calcula a quantidade de tinta necessária (em litros)
    litrosNecessarios = (area * 300) / 1000; // 300 ml por metro quadrado, convertido para litros

    // Calcula a quantidade de latas necessárias
    latasNecessarias = ceil(litrosNecessarios / 2); // Cada lata contém 2 litros

    // Imprime o resultado
    printf("Você precisará de aproximadamente %.0f latas de tinta.\n", latasNecessarias);

    return 0;
}
*/
/*
//EXERCÍCIO F

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    float fahrenheit, celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    return 0;
}
*/

/*
//EXERCÍCIO G

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    float pressao, volume, temperatura;

    // Pergunta os dados do pneu
    printf("Digite a pressão do pneu (em Pascal): ");
    scanf("%f", &pressao);

    printf("Digite o volume do pneu (em litros): ");
    scanf("%f", &volume);

    printf("Digite a temperatura do pneu (em Celsius): ");
    scanf("%f", &temperatura);

    // Imprime os dados fornecidos
    printf("Dados do pneu:\n");
    printf("Pressão: %.2f Pascal\n", pressao);
    printf("Volume: %.2f litros\n", volume);
    printf("Temperatura: %.2f Celsius\n", temperatura);

    return 0;
}
*/

/*
//EXERCÍCIO H

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    int primeiroTermo, razao, n, enesimoTermo;

    // Pergunta os dados da PA
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiroTermo);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite o número N: ");
    scanf("%d", &n);

    // Calcula o N-ésimo termo da PA
    enesimoTermo = primeiroTermo + (n - 1) * razao;

    // Imprime o resultado
    printf("O %d-ésimo termo da PA é: %d\n", n, enesimoTermo);

    return 0;

}
*/

/*
//EXERCÍCIO I

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    float a, b, c, delta, raiz1, raiz2;

    // Pergunta os coeficientes da equação
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Calcula o valor de delta
    delta = b * b - 4 * a * c;

    // Verifica se as raízes são reais ou complexas
    if (delta >= 0) {
        // Raízes reais
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);
    } else {
        // Raízes complexas
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(-delta) / (2 * a);
        printf("As raízes da equação são: %.2f + %.2fi e %.2f - %.2fi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);
    }

    return 0;
}

*/

/*
//EXERCÍCIO J

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    int notas1, notas10, notas50, notas100;
    int total;

    // Pergunta a quantidade de notas
    printf("Digite a quantidade de notas de 1 real: ");
    scanf("%d", &notas1);

    printf("Digite a quantidade de notas de 10 reais: ");
    scanf("%d", &notas10);

    printf("Digite a quantidade de notas de 50 reais: ");
    scanf("%d", &notas50);

    printf("Digite a quantidade de notas de 100 reais: ");
    scanf("%d", &notas100);

    // Calcula o valor total
    total = notas1 * 1 + notas10 * 10 + notas50 * 50 + notas100 * 100;

    // Imprime o valor total
    printf("O valor total em dinheiro é: %d reais\n", total);

    return 0;
}
*/

/*

//EXERCÍCIO L

//Importar biblioteca
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    int valor, notas100, notas50, notas10, notas5, notas1;

    // Pergunta o valor total em dinheiro
    printf("Digite o valor total em dinheiro: ");
    scanf("%d", &valor);

    // Calcula a quantidade de notas necessárias
    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas10 = valor / 10;
    valor %= 10;

    notas5 = valor / 5;
    valor %= 5;

    notas1 = valor;

    // Imprime a quantidade de notas necessárias
    printf("Notas de 100 reais: %d\n", notas100);
    printf("Notas de 50 reais: %d\n", notas50);
    printf("Notas de 10 reais: %d\n", notas10);
    printf("Notas de 5 reais: %d\n", notas5);
    printf("Notas de 1 real: %d\n", notas1);

    return 0;
}
*/
