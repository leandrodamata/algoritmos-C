#include <stdio.h>
#include <string.h>

int main()
{

    double largura, comprimento, valor, area, preco;

    printf("Digite a largura: ");
    scanf("%lf", &largura);
    printf("Digite a comprimento: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);
    
    area = largura * comprimento;
    preco = area * valor;

    printf("Area: %.2lf\n", area);
    printf("Preco: %.2lf\n", preco);

    return 0;
}
