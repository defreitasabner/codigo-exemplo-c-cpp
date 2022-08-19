// Importando biblioteca para usar string
#include <string>

// Importando biblioteca para usar array
#include <array>

// Usando o namespace std para escrever menos
using namespace std;

int main() {
    
    /*
    Tipos Derivados:
        São tipos derivados dos tipos primitivos, geralmente são importados de bibliotecas
        e também podem ser usados para declarar variáveis e constantes.
    */

    // String -> um vetor de caracteres (char)

        // Declarando uma string sem usar o cabeçalho <string>:
        char textoSemCabecalhoString[] = {"Isso é um texto"};

        // Declarando uma string usando o cabeçalho <string>:
        string textComCabecalhoString = "Isso é um texto";
    
    // Array -> um conjunto de valores de um determinado tipo
        
        // Declarando um array sem usar o cabeçalho <array>:
            // tipo_dos_valores nome_da_variavel[posicoes] = {valor1, valor2, etc...}
            int listaDeCincoInteirosSemCabecalhoArray[5] = {0, 1, 2, 3, 4};
            int listaDeMilInteirosSemCabecalhoArray[1000] = {}; // preencherá todas as posições com 0

        // Declarando um array usando o cabeçalho <array> 
            // array<tipo_dos_dados, tamanho_do_array>
            array<int, 5> listaDeCincoInteirosComCabecalhoArray;
            array<int, 1000> listaDeMilInteirosComCabecalhoArray; // preencherá todas as posições com 0

    // Function
    
    return 0;
}