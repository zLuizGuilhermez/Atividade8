#include <stdio.h>

int main()
{

    char elevador, periodo;
    int maximoPessoas = 0, elevadorA = 0, elevadorB = 0, elevadorC = 0, retorno = 0, periodoM = 0, periodoN = 0, periodoV = 0, periodoTotal;

    while (maximoPessoas <= 50)
    {

        do
        {
            printf("Qual elevador utiliza com mais frequencia?");
            scanf(" %c", &elevador);

            if (elevador == 'a' || elevador == 'b' || elevador == 'c')
            {
                if (elevador == 'a')
                {
                    elevadorA++;
                }
                else if (elevador == 'b')
                {
                    elevadorB++;
                }
                else if (elevador == 'c')
                {
                    elevadorC++;
                }
            }
            else
            {
                printf("Elevador não registrado.");
            }

            printf("Qual periodo utiliza o elevador?");
            scanf(" %c", &periodo);

            if (periodo == 'm' || periodo == 'n' || periodo == 'v')
            {
                periodoTotal++;
                if (periodo == 'm')
                {
                    periodoM++;
                }
                if (periodo == 'n')
                {
                    periodoN++;
                }
                if (periodo == 'v')
                {
                    periodoV++;
                }
            }
            else
            {
                printf("Periodo invalido.")
            }

            maximoPessoas++;
            printf("Desejar adicionar mais 1 pessoa ? (1 sim 0 nao)");
            scanf("%d", &retorno);

        } while (retorno != 0);
    }

    if ()
    {
        /* code */
    }
}
