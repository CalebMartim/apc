"""
Depurando um programa Python

O CodeRunner é um sistema para avaliação automática de programas de computador.
A proposta é simples, cada questão apresenta um contexto e descreve um
problema, e você deve prover como resposta um trecho de código que resolva este
problema. A avaliação também é simples, o sistema fornece informações (dados de 
entrada) ao seu programa e compara o resultado obtido (dados de saída) com o
resultado esperado (gabarito). Se forem iguais, você acertou a questão.

Por exemplo, suponha que o problema seja: "Dado dois números inteiros de
entrada que são a base e a altura de um triângulo, mostre o valor da área com
duas casas decimais." Um código que resolve esse problema é mostrado abaixo. No
entanto, ele tem erros de sintaxe e de semântica.

base  = input()
altura = input()
base = int(Base)
area = (base * altura)
print(f'{area:.3f}')

Verifique a solução apresentada e o corrija. Seu trabalho é consertar o programa.

A Entrada consiste de:

    Duas linhas, cada uma contendo um número inteiro positivo.


A Saída deve apresentar:

    Uma linha com a área de triângulo com duas casas decimais.

"""

# Recebe os valores base e altura e os converte para o tipo inteiro
base  = input()
altura = input()
base = int(base)
altura = int(altura)

# Calcula a área usando a fórmula para calcular a área de um triângulo, metade de base vezes altura
area = 1/2*(base * altura)

# Mostra na tela o resultado em duas casas decimais
print(f"{area:.2f}")
