#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaração das variáveis*/
    int num, raiz, quadrado;

    /*inicio da execução*/
    printf("Digite um número inteiro positivo");//Saida de dados na tela
    scanf("%d", &num);//Entrada de dados do usuario

    raiz = sqrt(num);//calculo da raiz
    quadrado = pow(num, 2);//calculo do quadrado

    printf("A raiz de %d é %d e %d elevado ao quadrado é %d", num, raiz, num, quadrado);//saida do resultado em tela com frase amigável

    return 0;//retrno obrigatório
}
