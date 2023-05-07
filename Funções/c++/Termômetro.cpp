/*
* Termômetro
* 
* Pedrinho está estudando sobre temperatura e precisa converter vários valores de
* temperatura entre as diversas unidades. Para facilitar, Pedrinho pediu ajuda
* para você, de forma a pular todo esse trabalho chato e extenso de conversão.
* 
* Dada uma temperatura T, em graus Celsius, crie uma função fahrenheit() que
* calcule e apresente a temperatura correspondente em graus Fahrenheit e uma
* função kelvin()
* 
* que calcule e apresente a temperatura correspondente em Kelvin.
* 
* A Entrada consiste de:
* 
*     Chamada das duas funções, fahrenheit(T) e kelvin(T), com o parâmetro T , um
*     número inteiro, que representa a temperatura em graus Celsius.
* 
* A Saída deve apresentar:
* 
*     Duas linhas que dispõem a temperatura em Fahrenheit e em Kelvin.
* 
* */

// Define cada as duas funções e simplesmente usa as fórmulas para fazer a conversão 
#include <iostream>
using namespace std;

void fahrenheit(double n){
    cout << "Fahrenheit: " << (n*1.8 + 32) << '\n';
}
void kelvin(double n){
    cout << "Kelvin: " << (n + 273.15) << '\n';
}

int main(){
}
