/*
* 5 patinhos? E se forem mais?
* 
* Gael, um garotinho muito a frente de seu tempo, está aprendendo a programar.
* Ele fez um programa para imprimir a música dos 5 patinhos que foram passear. Um
* clássico infantil! O programa de Gael imprime todas as frases da música e ele
* sabe que um clássico devemos respeitar. Neste caso, a música tradicional conta
* 5 patinhos.
* 
* Gael percebeu então que repetiu demais as frases e que dava pra fazer um código
* muito mais limpo e inteligente. Imagina 20 patinhos? Seria uma loucura esse
* código! Ele está ciente que você sabe modularizar um programa e pediu para que
* criasse duas funções de nome estrofe e refrao, onde cada uma deve receber um
* dos dois blocos de repetição que são possíveis observar nessa música. Ambas as
* funções devem receber como argumento um número n de patinhos que irá aparece na
* letra da música. A função estrofe deve chamar a execução da função refrao.
* 
*/

// Inicializa a função estrofe e não a função refrão pela ambiguidade do que ela 
// deveria apresentar. Usa formatação de strings para mostrar a quantidade de patinhos
// Para a estrofe

#include <iostream>

using namespace std;

void estrofe(int n){
    cout << n << " patinhos\n";
    cout << "Foram passear\n";
    cout << "Além das montanhas\n";
    cout << "Para brincar\n";
    cout << "A mamãe gritou\n";
    cout << "Quá, quá, quá, quá!\n";
    cout << "Mas só " << n -1 << " patinhos\n";
    cout << "Voltaram de lá\n";
    cout << "Agora só falta aprender a fazer loop!\n";
}

int main(){

}
