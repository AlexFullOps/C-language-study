#include <stdio.h>

int main(void)
{
    int idade[3] ={0, 0, 0};
    float media = 0.0;

    printf("\n Informe a idade da primeira pessoa:");
    scanf("%d", &idade[0]);
    printf("\n Informe a idade da segunda pessoa:");
    scanf("%d", &idade[1]);
    printf("\n Informe a idade da terceira pessoa:");
    scanf("%d", &idade[2]);
    media = (idade[0] + idade[1] + idade[2]) / 3;
    printf("\n A media entre as 3 idades  = %.2f", media);
    return 0;

}
