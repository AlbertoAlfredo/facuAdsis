#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define pi 3.14
    float raio, area, perimetro;

    printf("Digite o raio do círculo ");
    scanf("%f", &raio);

    area = pi*(pow(raio, 2));
    perimetro = 2*pi*raio;

    printf("A area do círculo é %f e o perímetro é %f", area, perimetro);
    return 0;
}
