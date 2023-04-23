/*
 * Onomatopeia Estendida
 *
 * Cebolinha e Cascão acabaram de ler todos os gibis da Turma da Mônica. Como
 * eles não tem mais nada pra fazer, já que a Mônica viajou, decidiram fazer uma
 * brincadeira: os dois procuraram todas as onomatopeias dos gibis e formam
 * novas a partir de três existentes. Para formar uma nova onomatopeia eles
 * juntam a primeira string com três ocorrências da segunda e duas da terceira.
 * Escreva um programa que dadas três onomatopeias, crie uma nova seguindo a
 * lógica dos amigos do Bairro do Limoeiro.
 *
 * A Entrada consiste de:
 *
 *     Três strings, as três onomatopéias.
 *
 *
 * A Saída deve apresentar:
 *
 *    Uma string representando a onomatopeia estendida.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Inicializa e recebe as três strings
    string primeira, segunda, terceira;
    cin >> primeira >> segunda >> terceira;

    // Atualiza os valores da segunda e terceira usando concatenação
    segunda += segunda + segunda;
    terceira += terceira;

    cout << primeira << segunda << terceira << '\n';
}
