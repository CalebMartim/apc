/*
Quem recebe o menor salário?

Você recebeu uma lista com todos os colaboradores de uma empresa. A lista
contém o nome do colaborador e o seu salário base em reais, separados por uma
vírgula, um por linha. Você não sabe o tamanho da lista, mas sabe que ela acaba
quando aparece no lugar do nome a palavra "Fim". Te perguntaram quem recebe o
menor salário na empresa. 

Elabore um programa que ache e imprima o nome de quem recebe o menor salário da
empresa. Não precisa usar listas ou dicionários para fazer esta questão.

A Entrada consiste de:

    De um número indefinido de linhas que termina com uma linha com a palavra
    "Fim" e um salário qualquer. Cada linha contém a string do nome do
    colaborador, seguido do seu salário em ponto flutuante com duas casas
    decimais. O valor do salário é maior do que R$ 0.00 e menor do que R$
    1000000000,00. O nome e o salário estão separados por vírgulas e não por
    espaços em branco.


A Saída deve apresentar:

    O nome da pessoa que tem o menor salário ou a string "Não tem", caso não
    haja o menor salário.

*/




#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Além do menor salário, temos que guardar o nome de quem tem o menor salário
    string pessoaComMenorSalario;
    // Começaremos o menorSalário como "infinito", um valor suficientemente grande 
    // para garantir que ele poderá ser atualizado por um valor menor recebido
    float menorSalario = 0xffffff;

    // Recebe o nome e salário do funcionário, separado por uma vírgula
    string nome; 
    float salario;
    getline(cin,nome);
    salario = stof(nome.substr(nome.find(',')+1));
    nome = nome.substr(0,nome.find(','));

    // Enquanto o nome recebido não for "Fim", estamos recebendo um funcionário válido
    // se o salário dele for menor do que o menor até agora, atualizamos o valor de 
    // menorSalario e guardamos o nome atual como o nome da pessoa com menor salário
    while(nome != "Fim"){
        if(salario < menorSalario){
            menorSalario = salario;
            pessoaComMenorSalario = nome;
        }
        getline(cin,nome);
        salario = stof(nome.substr(nome.find(',')+1));
        nome = nome.substr(0, nome.find(','));
    }

    // Mostra na tela o nome da pessoa com o menor salário, se este ainda for 
    // infinito, significa que não foi recebido nenhum funcionário 
    cout << fixed << setprecision(2);
    if(menorSalario != 0xffffff) cout << pessoaComMenorSalario;
    else cout << "Não tem";
    cout << '\n';

}
