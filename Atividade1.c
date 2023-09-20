#include <stdio.h>

int main() {
    char nota;
    int lugares = 0, idade = 0, a = 0, b = 0, c = 0, d = 0, e = 0, retorno = 1, idadeD = 0, somaRuim = 0;
    float idadePessimo = 0.0, percentagemPessimo = 0.0, idadeOtimo = 0.0, diferencaIdade = 0.0, porcentagemBom = 0.0, porcentagemRegular = 0.0, contaFinal = 0.0;

    while (lugares <= 100 && retorno == 1){
        printf("\nQual sua idade?");
        scanf("%d", &idade);

        printf("\nQual sua nota em relação ao filme a (otimo), b(bom), c(Regular), d(Ruim), e(Péssimo). )");
        scanf(" %c", &nota);

        if (nota == 'a'){
            a++;
            if (idade > idadeOtimo){
                idadeOtimo = idade;
            }
        } else if (nota == 'b') {
            b++;
        } else if (nota == 'c') {
            c++;
        } else if (nota == 'd') {
            d++;
            idadeD += idade;
        } else if (nota == 'e') {
            e++;
            if (idade > idadePessimo){
                idadePessimo = idade;
            }
        }

        lugares++;

        printf("\nDeseja adicionar mais uma pessoa? 1(sim) ou 0(nao)");
        scanf("%d", &retorno);
    }

    if (a > 0){
        printf("\nO número de respostas como otimo é: %d", a);
    } else{
        printf("Não possui registros de respostas 'a'");
    }

    printf("\n---------------------------------------------------------------------------");

    if (e > 0){
        percentagemPessimo = ((float)e / lugares) * 100;
        printf("\nA porcentagem das respostas que escolheram a nota péssimo é: %.2f%%", percentagemPessimo);
        printf("\nA maior idade entre as pessoas que escolheram péssimo: %.2f", idadePessimo);
    } else{
        printf("\nNenhum registro de péssimo.");
    }

    printf("\n---------------------------------------------------------------------------");
    if (d > 0){
        somaRuim = idadeD / d;
        printf("\nA média de idade das pessoas que responderam ruim é: %d", somaRuim);
    }

    if (idadeOtimo > 0){
        diferencaIdade = idadeOtimo - idadeD;
        printf("\nA diferença da idade de quem respondeu otimo e ruim é: %.2f", diferencaIdade);
    } else{
        printf("\nFalta informações sobre a idade de quem respondeu otimo ou ruim.");
    }

    printf("\n---------------------------------------------------------------------------");

    if (c > 0 && b > 0){
        porcentagemRegular = ((float)c / lugares) * 100;
        porcentagemBom = ((float)b / lugares) * 100;
        contaFinal = porcentagemBom - porcentagemRegular;
        printf("\nA diferença percentual entre respostas bom e regular é: %.2f%%", contaFinal);
    } else{
        printf("\nNão há um valor de notas regulares ou boas.");
    }

    return 0;
}
