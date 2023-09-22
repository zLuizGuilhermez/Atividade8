#include <stdio.h>

int main()
{
    char sexo;
    int idade = 0, retorno = 0, voto = 0, australia = 0, estadosUnidos = 0, Alemanha = 0, franca = 0, brasil = 0, numeroVotos = 0, retornoInicio = 0;

    do
    {

        printf("Digite seu nome?");

        do
        {
            printf("Qual sua idade?");
            scanf("%d", &idade);
            fflush(stdin);
            if (idade < 12)
            {
                printf("idade invalida.");
                printf("Deseja adicionar a idade novamente?");
                scanf("%d", &retorno);
                if (retorno < 1)
                {
                    return 0;
                }
                else
                {
                    retorno = 1;
                }
            }
            else
            {
                break;
            }
        } while (retorno > 0);

        do
        {
            printf("Qual seu sexo?  f/m");
            scanf(" %c", &sexo);
            fflush(stdin);
            if (sexo != 'f' && sexo != 'm')
            {
                printf("sexo invalido.");
                fflush(stdin);
                printf("Deseja adicionar o sexo novamente?");
                scanf("%d", &retorno);
                if (retorno < 1)
                {
                    return 0;
                }
                else
                {
                    retorno = 1;
                }
            }
            else
            {
                break;
            }

        } while (retorno > 0);
        retorno = 0;
        do
        {
            printf("Digite o numero do seu voto:");
            scanf("%d", &voto);

            if (voto == 1)
            {
                numeroVotos++;
                australia++;
            }
            else if (voto == 2)
            {
                numeroVotos++;
                estadosUnidos++;
            }
            else if (voto == 3)
            {
                numeroVotos++;
                Alemanha++;
            }
            else if (voto == 4)
            {
                numeroVotos++;
                franca++;
            }
            else if (voto == 5)
            {
                numeroVotos++;
                brasil++;
            }
            else
            {
                printf("Valor invalido.");
                retorno = 1;
            }

        } while (retorno == 1);

        printf("Deseja adicionar mais 1 pessoa?");
        scanf("%d", &retornoInicio);

    } while (retornoInicio > 0);

    /*Exibir a quantidade de votos que cada jogadora recebeu. */
    printf("\nSam Kerr recebeu %d", australia);
    printf("\nAlex Morgan recebeu %d", estadosUnidos);
    printf("\nDzsenifer recebeu %d", Alemanha);
    printf("\nArmandine recebeu %d", franca);
    printf("\nMarta Vieira recebeu %d", brasil);

    // Exibir a jogadora mais votada (caso aconteça empate entre mais de uma jogadora, deverá mostrar todas as que empataram).

    if (australia > estadosUnidos && australia > Alemanha && australia > Alemanha && australia > franca && australia > brasil)
    {
        printf("va jogadora mais votada e a Sam Kerr");
    }
    else if (estadosUnidos > australia && estadosUnidos > Alemanha && estadosUnidos > franca && estadosUnidos > brasil)
    {
        printf("\n A jogadora mais votada e o Alex Morgan");
    }
    else if (Alemanha > australia && Alemanha > estadosUnidos && Alemanha > franca && Alemanha > brasil)
    {
        printf("\nA jogadora mais votada e a Dzsenifer");
    }
    else if (franca > australia && franca > estadosUnidos && franca > Alemanha && franca > brasil)
    {
        printf("\nA jogadora mais votada foi a Armandine");
    }
    else if (brasil > australia && brasil > estadosUnidos && brasil > Alemanha && brasil > franca)
    {
        printf("\nA jogadora mais  votada foi a Marta.");
    }
    else
    {
        printf("\nDuas jogadoras ou mais estão empatadas.");
    }

    // Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa, separando por sexo, maior de idade e menor de idade.
    
}

