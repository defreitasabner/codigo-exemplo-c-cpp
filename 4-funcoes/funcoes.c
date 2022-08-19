// importando funções e tudo mais que tiver no arquivo <funcoes.h>
#include <4-funcoes/funcoes.h>

int main() {

    // Exemplo 1:
        // printando o resultado da execução da função passando valores diretamente
        printl(funcaoDeSomaExemplo(2, 5));

    // Exemplo 2:
        // declarando variáveis para passar o valor para função
        int primeiroValor = 4;
        int segundoValor = 2;

        // executando função recebendo valor de variáveis
        int variavelQueGuardaORetornoDaFuncao = funcaoDeSomaExemplo(primeiroValor, segundoValor);

        printl(variavelQueGuardaORetornoDaFuncao);

    return 0;
}