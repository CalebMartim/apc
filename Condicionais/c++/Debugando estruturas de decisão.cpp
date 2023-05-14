/*
Debugando estruturas de decisão

Inácio, dono de uma empresa de eletrodomésticos, estava preocupado com a
quantidade de reclamações que seus produtos e serviços tinham na Internet. Por
isso, resolveu criar um indicador para melhor acompanhar estas reclamações, o
índice de insatisfação (ii) do cliente.

O índice de insatisfação, chamado de ii, é composto por vários outros índices,
tais como, o índice de reclamação, o índice de indisponibilidade, além do
número de cancelamentos, de acordo com a descrição a seguir.

Ele definiu que o índice de reclamações seria uma escala de 0 a 100. Se o
cliente é atendido imediatamente após ligar ao call center zero é adicionado ao
ii e 100 se esperam em média mais de 100 minutos para serem atendidos.  Se 60%
ou mais das reclamações são resolvidas na primeira ligação, o ii baixa 5
pontos. Caso contrário aumenta 15 pontos.

Sobre o ii, é feita a seguinte alteração:

    a) se o número de cancelamentos do serviços é maior ou igual a 10% do total
    dos clientes, o ii aumenta 80 pontos se o cancelamento foi por problemas
    nos serviços prestados ou diminui 30 pontos caso contrário.

    b) se o número de cancelamentos dos serviços é menor do que 10% do total dos
    clientes, o ii aumenta 50 pontos se o cancelamento foi por problemas nos
    serviços prestados ou diminui 10 pontos caso contrário.

    Depois disso, é computado o índice de indisponibilidade do serviço que varia de
    0 a 100. Se os seus serviços ficaram fora do ar 10% ou mais do tempo em um mês,
    seu ii total será aumentado de 70 pontos, caso contrário, seu ii será rebaixado
    de 20 pontos.

*/

#include <iostream>
using namespace std;

int main(){
    int indice;
    int indiceReclamacao,
    percentReclamResolPrim,
    percentCliCancel,
    indiceIndisponibilidade,
    canceladoPorProblema;
    cin >> indiceReclamacao
    >> percentReclamResolPrim
    >> percentCliCancel
    >> indiceIndisponibilidade
    >> canceladoPorProblema;

    // Deve-se mudar para >= 60
    if (percentReclamResolPrim >= 60)
        indice = indiceReclamacao - 5;
    else
        indice = indiceReclamacao + 15;
    cout << indice << '\n';

    // Mudar para >= 10
    if ( percentCliCancel >= 10)
        // Mudar para  == 1
        if (canceladoPorProblema == 1)
            indice += 80;
        else
            indice -= 30;
    else
        // Mudar para  == 1
        if (canceladoPorProblema == 1)
            indice += 50;
        else
            indice -= 10;
    cout << indice << '\n';

    // Mudar para >= 10
    if (indiceIndisponibilidade >= 10)
        // Mudar para aumentar 70
        indice += 70;
    else
        // Mudar para diminuir 30
        indice -= 20;
    cout << indice << '\n';
}
