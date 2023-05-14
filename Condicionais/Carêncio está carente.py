"""
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

"""

# Recebe os quatro inteiros, um em cada linha
x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())

# Calcula a distância euclidiana dos dois pontos
d =((x1-x2)**2 + (y1-y2)**2)**(1/2)

# Verifica cada condição como a questão pede
if(d > 200):
    print("Não vale a pena investir")

elif(d > 100):
    print("Talvez dê certo")

else:
    print("É o amor da minha vida!")
