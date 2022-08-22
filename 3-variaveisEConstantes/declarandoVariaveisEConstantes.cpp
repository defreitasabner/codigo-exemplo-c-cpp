int main() {
    
    // Declarando variáveis:

        // Declarando sem valores iniciais
            int variavelDeclaradaSemValorInicial;

        //Declarando com valores inicias
            int variavelGuardandoUmNumeroInteiro = 42;
            char variavelGuardandoUmaLetra = 'x';

    // Declarando constantes:

        // Por convenção, constantes são escritas em letra maiúsculas e snake_case

        // Precisa de um valor inicial para ser declarada
        const int CONSTANTE_GUARDANDO_NUMERO_INTEIRO = 32;

        // Impossível declarar sem atribuir um valor inicial
        const char CONSTANTE_SENDO_DECLARADA_SEM_VALOR_INICIAL; // ERRO

    // Alterando valores de variáveis:
        
        // Alterando com o tipo correto
        variavelGuardandoUmNumeroInteiro = 84;
        variavelGuardandoUmaLetra = 'y';

        // Alterando com o tipo incorreto - Não dá ERRO, porém não é boa prática
        variavelGuardandoUmNumeroInteiro = 'y';
        variavelGuardandoUmaLetra = 84;
    
    // Alterando valor de uma constante - ERRO
    CONSTANTE_GUARDANDO_NUMERO_INTEIRO = 64; // Impossível reatribuir o valor de uma constante
    
    return 0;
}