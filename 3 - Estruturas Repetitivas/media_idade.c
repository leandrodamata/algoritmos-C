#include <stdio.h>

int main()
{
    int idades, cont, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idades);
    soma = 0;
    cont = 0;

    while (idades >= 0)
    {
        soma += idades;
        cont = cont + 1;
        scanf("%d", &idades);
    }
    if (cont == 0)
    {
        printf("Impossivel calcular!");  
    }
    else 
    {
        media = (double) soma / cont;
        printf("Media = %.2lf\n", media);
    }

    return 0;
}