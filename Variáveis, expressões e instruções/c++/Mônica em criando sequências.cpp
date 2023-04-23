/*
 * Mônica em: criando sequências
 *
 * Quando está no tédio, Mônica gosta de criar sequências de letras. Mas ela não
 * faz isso de uma maneira aleatória, segue todo um raciocínio para inventar uma
 * sequência e em seguida, ela a escreve em seu caderninho vermelho.
 *
 * A fórmula de Mônica para criar uma sequência consiste em alguns elementos:
 * três números inteiros a , b e c, todos maiores que zero e duas sequências p1
 * e p2
 *
 * que já existem (podendo ou não ser de autoria da Mônica). Com todos os
 * elementos, a Mônica cria a sequência da seguinte maneira:
 *
 *     Repete a sequência "p1" a+b vezes;
 *     Repete a sequência "p2" b+c vezes;
 *     Concatena o resultado do primeiro passo com o resultado do segundo passo;
 *     Repete o resultado do terceiro passo a+c vezes.
 *
 * Mônica gostaria de automatizar esse processo elaborando um programa com toda
 * a lógica que ela desenvolveu, mas como o PC dela foi pro conserto, ela não
 * pode fazer. Você poderia fazer esse favor a ela?
 *
 * A Entrada consiste de:
 *
 *     Três números inteiros positivos.
 *     Duas strings, uma em cada linha, como apresentado nos exemplos.
 *
 *
 * A Saída deve apresentar:
 *
 *     Uma string, representando a sequência criada por Mônica.
 */

#include <iostream>

using namespace std;

int main(){
    
    // Recebe os 5 valores fornecidos, três números e duas strings
    int a, b, c;
    string p1, p2;
    cin >> a >> b >> c >> p1 >> p2;

    // Como não há multiplicação de strings em c++, para multiplicarmos uma
    // string n vezes, iniciamos uma nova string inicialmente a string inicial
    // e adicionamos ela a string original n-1 vezes 
    
    string _p1 = p1;
    for (int i = 1; i < a + b; i++)
      _p1 += p1;

    string _p2 = p2;
    for(int i = 1; i < b + c; i++)
        _p2 += p2;
    
    // Mostra a strig a + c vezes
    string p3 = _p1 + _p2;
    for(int i = 0; i < a + c; i++)
        cout << p3;

    cout << '\n';
}
