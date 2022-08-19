int main() {
    
    // Declarando variáveis:

        // Declarando sem valores iniciais
            int variavelDeclaradaSemValorInicial;

        //Declarando com valores inicias
            int variavelGuardandoUmNumeroInteiro = 42;
            char variavelGuardandoUmaLetra = 'x';

    // Declarando constantes:

        // Precisa de um valor inicial para ser declarada
        const int constanteGuardandoUmNumeroInteiro = 32;

        // Impossível declarar sem atribuir um valor inicial
        const char constanteDeclaradaSemValorInicial; // ERRO

    // Alterando valores de variáveis:
        
        // Alterando com o tipo correto
        variavelGuardandoUmNumeroInteiro = 84;
        variavelGuardandoUmaLetra = 'y';

        // Alterando com o tipo incorreto - Não dá ERRO, porém não é boa prática
        variavelGuardandoUmNumeroInteiro = 'y';
        variavelGuardandoUmaLetra = 84;
    
    // Alterando valor de uma constante - ERRO
    constanteGuardandoUmNumeroInteiro = 64; // Impossível reatribuir o valor de uma constante
    
    return 0;
}