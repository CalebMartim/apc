"""
Onomatopeia Estendida

Cebolinha e Cascão acabaram de ler todos os gibis da Turma da Mônica. Como eles
não tem mais nada pra fazer, já que a Mônica viajou, decidiram fazer uma
brincadeira: os dois procuraram todas as onomatopeias dos gibis e formam novas
a partir de três existentes. Para formar uma nova onomatopeia eles juntam a
primeira string com três ocorrências da segunda e duas da terceira. Escreva um
programa que dadas três onomatopeias, crie uma nova seguindo a lógica dos
amigos do Bairro do Limoeiro.

A Entrada consiste de:

    Três strings, as três onomatopéias.

A Saída deve apresentar:

    Uma string representando a onomatopeia estendida.

"""


# Recebe as três strings na mesma linha e distribui elas entre as três variáveis
primeira, segunda, terceira = input().split()

# Mostra na tela a resposta usando concatenação de strings
print(primeira + 3*segunda + 2*terceira)
