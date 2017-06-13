#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Escrever um programa que recebe 4 inteiros e devolve a méia artmetica com duas casas decimais */
    //Declaração das variáveis
    int n1, n2, n3, n4;
    float media;
    //entrada de dados com mensagem amigável
    printf("Escreva 4 números inteiros");
    printf("Escreva o primeiro número ");
    scanf("%d", &n1);
    printf("Escreva o segundo número ");
    scanf("%d", &n2);
    printf("Escreva o terceiro número ");
    scanf("%d", &n3);
    printf("Escreva o quarto número ");
    scanf("%d", &n4);

    media = ((float)n1+n2+n3+n4)/4;//calculo da media, para o resultado ser float tem que fazer o cast (foat) na equação

    printf("A média aritimética dos números listado é: %.2f ", media);//saida do resultado com mensagem amigável


    return 0;//retorno obrigatório
}
