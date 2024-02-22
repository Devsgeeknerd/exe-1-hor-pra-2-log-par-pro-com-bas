#include <stdio.h>

int main()
{
    // Declaração de variáveis para o valor em dólares e o valor equivalente em reais.
    float valorDolares, valorReais;

    // Declaração de constante para a taxa de câmbio.
    const float taxaCambio = 3.85; // Taxa de câmbio: 1 dólar = 3,85 reais.

    // Solicita ao usuário o valor em dólares.
    printf("Digite o valor em dolares: ");
    scanf("%f", &valorDolares);

    // Calcula o valor equivalente em reais multiplicando o valor em dólares pela taxa de câmbio.
    valorReais = valorDolares * taxaCambio;

    // Exibe o resultado formatado em reais com duas casas decimais.
    printf("Valor em reais: R$ %.2f\n", valorReais);

    return 0;
}
