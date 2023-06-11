"""
Divisíveis por 3 e 7

Dado um número N inteiro e positivo, faça um programa que imprima todos os
números de 0 a N, incluindo o 0 e o N que são divisíveis por 3 e 7.

A Entrada consiste de:

    De um único caractere N inteiro positivo.

A Saída deve apresentar:

    Todos os números de 0 a N, incluindo o 0 e o N que são divisíveis por 3 e
    7, em uma única linha. Os números devem estar separados por espaços em
    branco. 

"""

# Recebe o número N
n = int(input())

# Itera por todo de 0 até n, (range(x) cria um range [0, x), por isso 
# para considerarmos o próprio x fazemos range(x+1) ) 
for x in range(n+1):

    # Se ele é divisível por 3 e por 7, ele é divisível por 21 (= 3*7) 
    # então o mostra na tela, modificando a função print para ele não 
    # dar uma quebra de linha
    if x%21 == 0:
        print(x, end=" ")

# Dá uma quebra de linha no final
print()
