/*
 * Troco em Moedas
 * O caixa de um supermercado precisa dar o troco de x centavos.  Sabendo que as
 * moedas disponíveis no caixa são de R$ 0,50, R$ 0,25, RS 0,10, R$ 0,05 e R$
 * 0,01, elabore uma função chamada troco que receba o valor inteiros x , do
 * troco em centavos, como parâmetro e imprima a quantidade de moedas de 50, 25,
 * 10, 5 e 1 centavos que deve dar, de forma a minimizar a quantidade de moedas
 * do troco.
 *
 * A Entrada consiste de:
 *
 *     A função troco deve ser chamada para qualquer valor arbitrário de troco
 *     definidos nos casos de teste, que é um número inteiro x, o valor do troco
 *     em centavos.
 *
 *
 * A Saída deve apresentar:
 *
 *     A função troco deve imprimir a quantidade de moedas de cada valor em
 *     centavos que serão entregues como troco, sempre com o menor número de
 *     moedas possíveis.
 *
 */

// Inicializa uma função troco que recebe um parâmetro do tipo inteiro.
// Para saber o mínimo de moedas possíveis como troco, iniciando do maior valor (50 centavos)
// verifica quantas moedas deste valor podem ser dadas, para isso, usa-se a divisão inteira
// e então retira das moedas sobrando essa quantidade.
// Quando todas as moedas de 50 -> 10 centavos possíveis forem dadas
// basta apenas mostrar a quantidade de moedas restantes, considerando que este número sempre será 
// o mesmo que ele mesmo dividido por 1.

#include <iostream>
using namespace std;

void troco(int n){
    cout << n/50 << " moedas de 50 centavos\n";
    n -= 50*(n/50);
    cout << n/25 << " moedas de 25 centavos\n";
    n -= 25*(n/25);
    cout << n/10 << " moedas de 10 centavos\n";
    n -= 10*(n/10);
    cout << n/5 << " moedas de cinco centavos\n";
    n -= 5*(n/5);
    cout << n << " moedas de 1 centavo\n";
}

int main(){

}
