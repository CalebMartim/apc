/*
Carêncio está carente

Nem sempre é fácil encontrar o amor da sua vida. Para Carêncio, um jovem
solteiro que está se sentindo sozinho, aparentemente o mar não está para peixe.
Como ele não possui uma vida movimentada o suficiente para encontrar alguém
facilmente, seu amigo lhe indicou um aplicativo de namoro, o revolucionário
"LovePertin". O aplicativo mostra sua localização e a de pessoas em uma raio de
1 km que podem se interessar pelo seu perfil. Porém, Carêncio acredita que o
amor deve ser algo fácil e não tem tanta paciência para lutar por uma paixão,
então decidiu que, a depender da distância que a pessoa estiver, não valeria a
pena investir em um encontro. Sendo D a distância entre ele e a pessoa, ele
determinou os seguintes critérios:

    D ≤ 100 : ''É o amor da minha vida!"
    100 < D ≤ 200 : "Talvez dê certo"
    D > 200 : "Não vale a pena investir"

Como Carêncio tem feito sucesso no aplicativo, ele pediu sua ajuda na
classificação de cada match que recebeu. Para isso implemente um programa que
de acordo com a distância entre eles determina se vale ou não a pena investir
no encontro respeitando os critérios estabelecidos por Carêncio.
 
A Entrada consiste de:

    4 linhas, todas com variáveis do tipo inteiro, sendo as duas primeiras
    (x1,y1) a localização de Carêncio e as duas últimas (x2,y2) a localização
    de sua mais nova paquera.

A Saída deve apresentar:

    Umas das três frases ("É o amor da minha vida!", "Talvez dê certo", "Não
    vale a pena investir") de acordo com a distância.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
// Recebe os quatro inteiros
int x1, y1, x2, y2; cin >> x1 >> x2 >> y1 >> y2;

// Calcula a distância euclidiana dos dois pontos
double d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

// Verifica cada condição como a questão pede
if(d > 200)
    cout << "Não vale a pena investir\n";
else if(d > 100)
    cout << "Talvez dê certo\n";
else
    cout << "É o amor da minha vida!\n";
}
