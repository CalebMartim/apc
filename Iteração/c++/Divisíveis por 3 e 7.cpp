/*
Divisíveis por 3 e 7

Dado um número N inteiro e positivo, faça um programa que imprima todos os
números de 0 a N, incluindo o 0 e o N que são divisíveis por 3 e 7.

A Entrada consiste de:

    De um único caractere N inteiro positivo.

A Saída deve apresentar:

    Todos os números de 0 a N, incluindo o 0 e o N que são divisíveis por 3 e
    7, em uma única linha. Os números devem estar separados por espaços em
    branco. 

*/
#include <iostream>
using namespace std;

int main(){

    // Recebe o número N
    int n; cin >> n;

    // Itera por todo número de 0 até n. 
    for(int x = 0; x <= n; ++x){

        // Se ele é divisível por 3 e por 7, ele é divisível por 21 (= 3*7) 
        // então o mostra na tela, modificando a função print para ele não 
        // dar uma quebra de linha
        if(x%21 == 0)
            cout << x << ' '; 

    }
    // Dá uma quebra de linha no final
    cout << '\n';
}
