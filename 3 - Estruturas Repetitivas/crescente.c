#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    printf("Digite dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);

    while (x != y)
    {
        if (x > y)
        {
            printf("Descrescente!\n");
        }
        else
        {
            printf("Crescente!\n");
        }

        printf("Digite outros dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);

    }

    return 0;
    
}