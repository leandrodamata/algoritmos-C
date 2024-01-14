#include <stdio.h>

int main ()
{
    double soma, media;
    int i, N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nValores = ");
    for (int i = 0; i < N; i++)
    {
        printf("%.1lf ", vet[i]);
    }

    printf("\n");

    soma = 0;
    media = 0;

    for (int i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }
    printf("Soma = %.2lf\n", soma);

    media = soma / N;
    printf("Media = %.2lf\n", media);

    return 0;
}