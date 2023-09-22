#include <stdio.h>

int main()
{
    int numeroUsuario, termoAnterior = 0, termoAtual = 1, proximoTermo;

    printf("Digite um numero limite para a sequencia de Fibonacci: ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario < 0)
    {
        printf("Não pode número negativo.\n");
    }
    else
    {

        while (termoAnterior <= numeroUsuario)
        {
            printf("%d\n", termoAnterior);
            proximoTermo = termoAnterior + termoAtual;
            termoAnterior = termoAtual;
            termoAtual = proximoTermo;
        }
    }

    return 0;
}
