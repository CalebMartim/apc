
/*
 * Expres(u)s(u)ão
 *
 * Susu terminou sua tarefa de matemática e para revisar mais um pouco o
 * conteúdo ela resolveu aplicar vários números em uma expressão numérica que
 * ela mesma criou: para cada número x , primeiro multiplica-se x por 2, desse
 * resultado subtrai-se 5 e por último acrescenta-se 2x . Escreva um programa
 * que recebe um inteiro x, o aplica na expressão de Susu e retorna o resultado.
 *
 *
 * A Entrada consiste de:
 *
 *     x, um número inteiro positivo.
 *
 *
 * A Saída deve apresentar:
 *
 *     Um número inteiro, o resultado da expressão numérica.
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Recebe o valor inicial 
    int n; cin >> n;

    // Mostra na tela a resposta
    cout << (n*2)-5 + pow(2,n) << '\n';
}
