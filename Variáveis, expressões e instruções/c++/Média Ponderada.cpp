/*
 * Média Ponderada
 *
 * Elabore um programa que lê três notas de um aluno e o peso de cada nota e
 * apresenta a média final deste aluno
 *
 * A Entrada consiste de:
 *
 *     uma linha contendo três números do tipo floats n1, n2 e n3, que
 * representam as notas de um aluno. A segunda linha da entrada contém números
 * três inteiros p1, p2 e p3, que representam os pesos de cada nota.
 *
 *
 * A Saída deve apresentar:
 *
 *     Uma linha com a média ponderada do aluno, com seis casas decimais.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double nota_um, nota_dois, nota_tres, peso_um, peso_dois, peso_tres;
    cin >> nota_um >> nota_dois >> nota_tres >> peso_um >> peso_dois >> peso_tres;

    cout << fixed << setprecision(6) << (nota_um*peso_um + nota_dois*peso_dois + nota_tres*peso_tres)/(peso_um+peso_dois+peso_tres) << '\n';
}
