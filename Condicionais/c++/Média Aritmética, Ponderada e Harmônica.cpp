/*
Média Aritmética, Ponderada e Harmônica

Escreva um programa que leia 3 números inteiros positivos e efetue o cálculo
das médias Aritmética (A), Ponderada (P) e Harmônica (H) dependendo da letra
dada pelo usuário, mostre qual o tipo de média e qual o valor da média. No caso
do usuário digitar qualquer outro caractere, apresente a mensagem 'Operacao
inexistente'.

A Entrada consiste de:

    Linha contendo as três notas que são três números reais positivos. Linha
    contendo um caractere (para determinar qual a média), sendo (P) Ponderada,
    (H) Harmônica e (A) Aritmética Caso o caractere seja 'P', deve-se solicitar
    os três pesos de cada nota enviada, que são números positivos inteiros.

A Saída deve apresentar:

    Na primeira linha, o tipo de média que ele fez ("Harmonica", "Ponderada",
    "Aritmetica" ou "Operacao inexistente") Na segunda linha, caso tenha sido
    digito um caractere válido, o resultado da média com precisão de 2 casas 
    decimais.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Recebe os inteiros e o tipo da media desejada
    double n1, n2, n3; string tipo; cin >> n1 >> n2 >> n3 >> tipo;

    // Média ponderada 
    if(tipo == "P"){
        double p1, p2, p3; cin >> p1 >> p2 >> p3;
        cout << "Ponderada\n" << fixed << setprecision(2) << (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3) << '\n';
    }
    // Média harmônica
    else if(tipo == "H")
        cout << "Harmonica\n" << fixed << setprecision(2) << (3)/(1/n1 + 1/n2 + 1/n3) << '\n';

    // Média aritmética
    else if(tipo == "A")
        cout << "Aritmetica\n" << fixed << setprecision(2) <<  (n1 + n2 + n3)/(3) << '\n';

    // Média inexistente
    else
        cout << "Operacao inexistente\n";
}
