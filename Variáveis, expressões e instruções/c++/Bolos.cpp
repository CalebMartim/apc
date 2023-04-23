/*
 * Bolos
 *
 * Drikinha gosta de bolos de vários sabores. Uma vez por semana ela vai em uma
 * padaria perto de casa e pede x pedaços de bolo de algum sabor, o pedaço de
 * bolo tem o valor fixo de 3.25 reais, independentemente do sabor. Escreva um
 * programa que recebe o sabor do bolo e a quantidade de pedaços que Drikinha
 * irá comprar e retorne a frase do atendente: "Foram x pedaços de bolo de s,
 * então fica z reais". Onde x é a quantidade de pedaços, s o sabor do bolo e z
 * o total da compra de Drikinha em reais. Imprima o valor da compra com apenas
 * duas casas após a vírgula.
 *
 * A Entrada consiste de:
 *
 *     Uma string e um número inteiro positivo, representando o sabor do bolo e
 * quantidade de pedaços respectivamente.
 *
 * A Saída deve apresentar:
 *
 *     Uma string, como especificado no enunciado.
 *
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    // Inicializa as variáveis e as recebe 
    string sabor; float quantidade; 
    cin >> sabor >> quantidade;

    //  Mostra na tela a resposta usando fixed e setprecision para o valor ficar com duas casas decimais
    cout << "Foram " << quantidade << " pedaços de bolo de " << sabor << ", então fica " << fixed << setprecision(2) << (quantidade*3.25) << " reais\n";
}
