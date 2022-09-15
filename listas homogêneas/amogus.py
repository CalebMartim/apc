"""
No jogo Amongus os jogadores tem como objetivo remover os impostores da partida. A sua missão é implementar um programa que receberá um inteiro ‘n’ que será a quantidade de jogadores na partida e nas ‘n’ linhas seguintes tem-se os nome de usuários (username) dos jogadores. Na última linha de entrada, tem-se os usernames dos impostores separados por um espaço. Dessa forma, deve-se exibir na tela a lista composta pelos crewmates, ou seja, os participantes que não são impostores.
"""

num_jogadores = int(input())
jogadores = []

for i in range(num_jogadores):
    jogadores.append(input())

impostores = input().split()

for impostor in impostores:
    for jogador in jogadores:
        if impostor == jogador:
            jogadores[jogadores.index(jogador)] = ""

for jogador in jogadores:
    if jogador:
        print(jogador, end=" ")
 
print()