#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));  

    printf("Area: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);
    printf("Perimetro: %.4lf\n", diagonal);


    return 0;
}
