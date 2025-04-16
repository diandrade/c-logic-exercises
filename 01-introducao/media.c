#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Notas? ");
    scanf("%f %f", &a, &b);

    c = (a + b) / 2;

    printf("Media = %.1f\n", c);

    if (c >= 6.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}