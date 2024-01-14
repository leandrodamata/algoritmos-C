#include <stdio.h>

int main ()
{
    int i, N, menoridade;
    double soma, media, percentualmenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];


    for (int i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1); // se imprimir i ele vai retornar a posicao 0 e precisamos da 1a pessoa
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    printf("\n");

    soma = 0;
    media = 0;

    for (int i = 0; i < N; i++)
    {
        soma = soma + alturas[i];
    }
    
    media = soma / N;
    printf("Altura media: %.2lf\n", media);

    menoridade = 0;

    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            menoridade++;
        }
    }
    percentualmenores = menoridade * 100.0 / N;

    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualmenores); // para colocar % em C, devemos colocar %%
    
    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}