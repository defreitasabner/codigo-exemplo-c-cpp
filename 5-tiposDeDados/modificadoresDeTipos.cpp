int main() {
    
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
    
    return 0;
}