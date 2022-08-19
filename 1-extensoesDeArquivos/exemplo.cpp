/* 
Arquivos C (extensão -> .c):
    - Esses arquivos possuem a extensão .c e são 'arquivo de execução'
    - Nesses arquivos serão chamadas as variáveis e funções declaradas nos arquivos de cabeçalho (.h)
    - Execução do código principal (main())
*/

// Incluindo abeçalho para saída e entrada de dados no console
#include <iostream>
using namespace std; // usando o namespace para reduzir a quantidade de código escrito

// Incluindo nosso arquivo de cabeçalho, isso inclui qualquer função ou variável declarada nele
#include <1-extensoesDeArquivos/exemplo.h>

int main() {

    // Exibindo no console a variável importada do 'arquivo de cabeçalho'
    cout << variavelDeclaradaNoArquivoDeCabecalho;

    // Executa a função declara no 'arquivo de cabeçalho' importado
    funcaoDeclaradaNoArquivoDeCabecalho();
    
    return 0;
}