"""
Média Ponderada

Elabore um programa que lê três notas de um aluno e o peso de cada nota e
apresenta a média final deste aluno

A Entrada consiste de:

    uma linha contendo três números do tipo floats n1, n2 e n3, que representam
    as notas de um aluno. A segunda linha da entrada contém números três
    inteiros p1, p2 e p3, que representam os pesos de cada nota.


A Saída deve apresentar:

    Uma linha com a média ponderada do aluno, com seis casas decimais.

"""

# Recebe as notas e seus pesos e utiliza a função map para transformar cada
# valor recebido em sua versão de float
nota_um, nota_dois, nota_tres = map(float, input().split());
peso_um, peso_dois, peso_tres = map(float, input().split());

# Calcula a média ponderada, a soma de cada valor vezes seu peso dividida pela
# soma dos pesos. Utilizando print(f"") para mostrar em 6 casas decimais

print(f"{(nota_um*peso_um + nota_dois*peso_dois + nota_tres*peso_tres)/(peso_um+peso_dois+peso_tres):.6f}")
