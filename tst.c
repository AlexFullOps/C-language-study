#include <stdio.h>

int main(void)  
{
    int idade[3] = {0, 0, 0};
    float media = 0.0;

    printf("\n Digite a primeira idade:");
    scanf("%d", &idade[0]);
    printf("\n Digite a segunda idade:");
    scanf("%d", &idade[1]);
    printf("\n Digite a terceira idade:");
    scanf("%d", idade[2]);
    media = (idade[0] + idade[1] + idade[2]) / 3;
    printf("\n A media entre as idades =  %.2f", media);
    return 0;
}
