#include <3-escopoDeVariaveis/escopoDeVariaveis.h>

int main() {
    
    // Variável declarada no escopo global
    int variavelEmEscopoGlobal = 42;

    // Exibindo variável no console
    printl(variavelEmEscopoGlobal);

    // Executando a função vinda do arquivo de cabeçalho (header)
    funcaoDeExemplo();

    // Como essa variável está dentro da função, não poderia ser acessada, isso daria ERRO
    print(variavelEmEscopoLocal); // ERRO: essa variável não existe no escopo global
    
    return 0;
}