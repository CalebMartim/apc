/*
Qual o maior salário?

Você recebeu uma lista com todos os colaboradores de uma empresa. A lista
contém o nome do colaborador e o seu salário base em reais, separados por uma
vírgula, um por linha. Você não sabe o tamanho da lista, mas sabe que ela acaba
quando aparece no lugar do nome a palavra "Fim". Te perguntaram qual maior
salário na empresa. 

Elabore um programa que ache e imprima o maior salário da empresa. Não precisa
usar listas ou dicionários para fazer esta questão.

A Entrada consiste de:

    De um número indefinido de linhas que termina com uma linha com a palavra
    "Fim" e um salário qualquer. Cada linha contém a string do nome do
    colaborador, seguido do seu salário, que é maior que zero, em ponto
    flutuante com duas casas decimais. O nome e o salário estão separados por
    vírgulas e não por espaços em branco.


A Saída deve apresentar:

    O valor do maior salário ou a string "Não tem", caso não haja o maior
    salário.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // O salário máximo como menos um, pois isto será usado para verificar mais 
    // tarde se nenhum salário foi dado
    float maximo = -1;

    // Recebe o nome e salário do funcionário, separado por uma vírgula
    string nome; 
    float salario;
    getline(cin,nome);
    salario = stof(nome.substr(nome.find(',')+1));
    nome = nome.substr(0,nome.find(','));

    // Enquanto o nome não for "Fim", vamos comparar o salário recebido com o maior 
    // recebido até agora, se o atual for maior do que o maior recebido até agora,
    // o maior recebido até agora se torna o atual
    while(nome != "Fim"){
        maximo = max(maximo, salario);
        getline(cin,nome);
        salario = stof(nome.substr(nome.find(',')+1));
        nome = nome.substr(0, nome.find(','));
    }

    // Simplesmente mostra na tela o maior salario recebido se ele não for igual a -1.
    // Se for igual a -1, isso significa que não foi recebido nenhum salário

    
    cout << fixed << setprecision(2);
    if(maximo != -1) cout << maximo;
    else cout << "Não tem";
    cout << '\n';

}
