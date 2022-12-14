#include <4-escopoDeVariaveis/escopoDeVariaveis.h>

int main() {
    
    // Variável declarada no escopo global
    int variavelEmEscopoGlobal = 42;

    // Exibindo variável no console
    printl(variavelEmEscopoGlobal);

    // Executando a função vinda do arquivo de cabeçalho (header)
    funcaoDeExemplo();

    // Como essa variável está dentro da funçãoDeExemplo, ela só pode ser acessada dentro dessa função
    // Como não poderíamos acessá-la de fora da função, isso daria ERRO, como ocorre abaixo:
    printl(variavelEmEscopoLocal); // ERRO: essa variável não existe no escopo global
    
    return 0;
}