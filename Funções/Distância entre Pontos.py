"""
Distância entre Pontos

Elabore uma função chamada distancia() que tem como parâmetros as coordenadas
x1, y1, x2, y2, representando dois pontos no plano cartesiano. A função deve
retornar a distância entre esses dois pontos como um número de ponto flutuante.

A Entrada consiste de:

    Não há entrada para essa questão, só é necessário definir a função
    distancia() com parâmetros x1, y1, x2 e y2.


A Saída deve apresentar:

    Não há saída para essa questão, só é necessário que a função retorne a
    distância entre os dois pontos.

"""

# Inicializa a função distância e usa a fórmula para cálculo de distância
# euclidiana: sqrt(pow(x1-x2, 2) + pow(x1-x2, 2)) e retora este resultado
def distancia(x1, y1, x2, y2):
    return ((x1 - x2)**2 + (y1-y2)**2)**(1/2)
