
// Função principal necessária em códigos C++
int main() {
    
    /* 
    Tipos primitivos:
        São tipos built-in (nativos) da linguagem e são usados para declarar variáveis
        e constantes ou para indicar o retorno de funções.
    */

    // int -> números inteiros / 4 bytes
        int inteiro = 42; // de -2,147,483,648 a 2,147,483,648

        // float -> números de ponto flutuante com 7 dígitos de precisão / 4 bytes
        float numeroFlutuante = 3.141592;

        // double -> números de ponto flutuante com 14 dígitos de precisão / 8 bytes
        double numeroFlutuanteMaisPreciso = 3.141592653589;

        // char -> caracteres padrões / 1 byte
        char caractereA = 'a';
        char caractereB = 'b';
        char caractereC = 'c';

        // bool -> booleano, lógico / 1 byte
        bool verdadeiro = true;
        bool falso = falso;

        // void -> vazio, sem retorno / -
        void funcaoDeExemplo();

        // Modificadores de Tipos:

            // short -> reduz a quantidade de informação transmitida e de memória consumida (em bytes)
            short int inteiroCurto = 1; // de -32,768 a 32,767 / 2 bytes

            // long -> aumenta a quantidade de informação transmitida e de memória consumida (em bytes)
            long int inteiroLongo; // não faz diferença nenhuma se comparado ao int padrão
            long long int inteiroMuitoLongo; // de -(2^63) a (2^63)-1 / 8 bytes
            long double numeroDePontoFlutuanteGigantesco; // de 'quase nada' até 'coisa pra caramba' / 16 bytes

            // signed -> por padrão, todo numérico é signed, ou seja, tem sinal
            signed char caractereComSinal = 'x'; // de -128 a 127 / 1 byte

            // unsigned -> apenas o módulo do valor, por exemplo: -128 a 127 -> 0 a 255
            unsigned int inteiroSemSinal = 65.535; // de 0 a 4.294.967.295 / 4 bytes
            unsigned char caractereSemSinal = 'y'; // de 0 a 255 / 1 byte

            // combinações de modificadores de tipo:
                unsigned short int inteiroSemSinalCurto = 1; // de 0 a 65,535 / 2 bytes
                unsigned long int inteiroSemSinalLongo = 4294967295; // de 0 a 4,294,967,295 / 4 bytes

    // Necessário para função principal
    return 0;

}