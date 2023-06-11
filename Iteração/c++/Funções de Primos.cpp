/*
Funções de Primos

Um número primo é um número inteiro maior que 1 que é divisível apenas por 1 e
por ele mesmo. Um número a é divisível por b se o resto da divisão de a por b é
zero. Dessa forma implemente as funções chamadas (1) ehPrimo, que recebe um
inteiro 1≤x≤106 e retorna se o valor é ou não primo, e (2) divisoresPrimos que
recebe um inteiro 1≤x≤106 e retorna a quantidade de divisores primos.

A Entrada consiste de:

    A função ehPrimo recebe como parâmetro um único inteiro 1 ≤ x ≤ 106. A função
    divisoresPrimos recebe como parâmetro um único inteiro 1 ≤ x ≤ 106.

A Saída deve apresentar:

    A função ehPrimo retorna 1 caso x seja primo e 0 caso contrário. A função
    divisoresPrimos retorna a quantidade de divisores primos do inteiro x
    recebido.

*/
#include <iostream>
using namespace std;


int ehPrimo(int n){
    // Por definição, um inteiro n é primo se, e somente se, 
    // ele não possui divisores maiores que um e menores 
    // do que ele mesmo. Então, entre dois até n-1, se 
    // encontrarmos um inteiro x tal que o resto da divisão 
    // de n por x for 0, temos um número que divide n maior que 
    // 1 e menor do que ele mesmo, então retornamos 0.
    for(int x = 2; x < n; ++x)
        if(n%x == 0)
            return 0;
    return 1;
}


int divisoresPrimos(int n){
    // Variável que conta o número de divisores primos 
    int contador = 0;

    // Como 1 divide qualquer inteiro, mas ele não é primo, 
    // começamos por 2. Como nenhum número é divisível por algum 
    // inteiro maior que sua metade, só verificamos até 
    // sua metade.
    for(int x = 2; x <= n/2; ++x)
        if(n%x==0 and ehPrimo(x))
            contador += 1;

    return contador;
}

int main(){}
