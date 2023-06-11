/*

Dêivis no show de rock

Dêivis e seus amigos estão se preparando para o próximo show de rock: Black
Sabbath. A banda virá pela segunda e última vez ao Brasil, em dezembro de 2016.
A situação é a seguinte: nem todos os amigos possuem dinheiro o suficiente para
comprar o ingresso, mas alguns amigos possuem mais dinheiro do que o
necessário. Como Dêivis e seus amigos são muito unidos e acreditam que a coisa
mais importante da vida é não perder um show de rock com a galera, eles
decidiram juntar todo o dinheiro que têm para tentarem comprar ingressos para
todos. Dêivis se encarregou de fazer as contas. Mas o Dêivis é o Dêivis... É
claro que sobrou para você. Dada a quantidade de dinheiro de cada amigo e o
valor i do ingresso, Dêivis pediu a sua ajuda para calcular a parte inteira do
dinheiro médio e determinar se todos poderão ir ao show.

A Entrada consiste de:

    A primeira linha da entrada contém dois inteiros: quantidade de amigos
    1 ≤ n ≤ 109 e preço do ingresso 1 ≤ i ≤109 separados por espaço. Cada uma das
    próximas n linhas contém um inteiro 0 ≤ a_i ≤ 109 onde 1 ≤ i ≤n representa
    o dinheiro do i-ésimo amigo.

A Saída deve apresentar:

    A primeira linha da saída deve conter a parte inteira do dinheiro médio
    para cada amigo, conforme os exemplos. A segunda linha deve conter a
    mensagem "o rock reinara mais uma vez" se houver dinheiro o suficiente para
    todos, ou a mensagem "rockeiros trabalhando ja" em caso contrário.

*/

#include <iostream>
using namespace std;

int main(){
    // Recebe o número de amigos e o preço do ingresso
    int n, i; cin >> n >> i;

    // Usaremos uma variável de soma par calcularmos a média
    int soma = 0;

    for(int i = 0, a; i < n; ++i)
        cin >> a, soma += a;

    float media = (float) soma/n;

    // Mostramos a média e as mensagens devido suas condições 
    cout << "media: " << media << '\n';

    cout << (media >= i ? "o rock reinara mais uma vez" : "rockeiros trabalhando ja") << '\n';
}
