/*
 * Distância entre Pontos
 *
 * Elabore uma função chamada distancia() que tem como parâmetros as coordenadas
 * x1, y1, x2, y2, representando dois pontos no plano cartesiano. A função deve
 * retornar a distância entre esses dois pontos como um número de ponto
 * flutuante.
 *
 * A Entrada consiste de:
 *
 *     Não há entrada para essa questão, só é necessário definir a função
 *     distancia() com parâmetros x1, y1, x2 e y2.
 *
 *
 * A Saída deve apresentar:
 *
 *     Não há saída para essa questão, só é necessário que a função retorne a
 *     distância entre os dois pontos.
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

// Inicializa a função distância e usa a fórmula para cálculo de distância
// euclidiana: sqrt(pow(x1-x2, 2) + pow(x1-x2, 2)) e retora este resultado
// Como o tipo double para melhor precisão

double distancia(double x1, double y1, double x2, double y2){
    return sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) ); 
}

int main(){

}
