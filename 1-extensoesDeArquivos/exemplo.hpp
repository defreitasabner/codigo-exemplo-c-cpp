/* 
Arquivos HPP (extensão -> .hpp):
    - Esses arquivos possuem a extensão .hpp e são 'arquivos de cabeçalho e de execução'
    - Nesse arquivo serão declaradas variáveis/funções além de executá-las
*/

// Incluindo abeçalho para saída e entrada de dados no console
#include <iostream>
using namespace std; // usando o namespace para reduzir a quantidade de código escrito

char variavelDeclaradaNoArquivoDeCabecalho = 'x';

int funcaoDeclaradaNoArquivoDeCabecalho() {
    return 42;
}

int main() {

    // Exibindo no console a variável importada do 'arquivo de cabeçalho'
    cout << variavelDeclaradaNoArquivoDeCabecalho;

    // Executa a função declara no 'arquivo de cabeçalho' importado
    funcaoDeclaradaNoArquivoDeCabecalho();
    
    return 0;
}