#include <stdio.h>

int main()
{

    char sexo, nome[30];
    float altura = 0.0, peso = 0.0,alturahomem = 0.0,alturaHomemMedia = 0.0;
    int contador = 0, retorno = 0, masculino = 0, feminino = 0;

    while (contador <= 10)
    {
        printf("Digite seu nome");
        scanf(" %c", &nome);
        fflush(stdin);

        do
        {
            printf("Digite o seu sexo: f/m");
            scanf(" %c", &sexo);
            if (sexo == 'm')
            {
                masculino++;
            }
            else if (sexo == 'f')
            {
                feminino++;
            }
            else
            {
                printf("invalido.");
                printf("Deseja inserir o sexo novamente? 1sim 0nao");
                scanf("%d", &retorno);
            }

        } while (retorno > 0);
        do
        {
            printf("Digite a sua altura");
            scanf("%f", &altura);
            if (sexo  =  'm')
            {
                alturahomem += altura;
            }
            
            if (altura < 0)
            {
                printf("invalido.");
                printf("Deseja inserir o valor da altura novamente? 1sim 0 nao");
                scanf("%d", &retorno);
            }
        } while (retorno > 0);
        retorno = 0;
        do
        {
            printf("Digite o seu peso");
            scanf("%f", &peso);
            if (peso < 0)
            {
                printf("invalido;");
                printf("Deseja inserir o vallor da altura novamente? 1sim 0nao");
                scanf("d", &retorno)
            }

        } while (retorno > 0);
        contador++;
    }
    //o número de homens
    printf("o numero de mulheres foi %d", feminino);
    //o número de homens
    printf("o numero de homens foi %d", masculino);
    //a altura média dos homens
    if (sexo == 'm')
    {
        alturaHomemMedia = alturahomem / masculino;
    }
    printf("A media das altura dos homens e :%0.02f", alturaHomemMedia);
    

}
