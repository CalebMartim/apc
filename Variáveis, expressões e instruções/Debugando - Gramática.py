"""
Debugando - Gramática

Dado o seguinte programa copie-o no IDE Python para depurá-lo até funcionar corretamente:

S = input()
O = input()
P = input()
return = ( p + ( o + s ) )
print(Return)

A Entrada consiste de:

    Entrada 1 - uma string com o sujeito da oração
    Entrada 2 - uma string com o objeto da oração
    Entrada 3 - uma string com o verbo da oração


A Saída deve apresentar:

    Uma oração em língua portuguesa na ordem direta.

"""

# Recebe as três strings em linhas diferentes
s = input()
o = input()
p = input()

# Usa print(f"") para mostrar na tela a string formatada como pedido
print(f"{s} {p} {o}.")
