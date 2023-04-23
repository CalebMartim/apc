"""
Bolos

Drikinha gosta de bolos de vários sabores. Uma vez por semana ela vai em uma
padaria perto de casa e pede x pedaços de bolo de algum sabor, o pedaço de bolo
tem o valor fixo de 3.25 reais, independentemente do sabor. Escreva um programa
que recebe o sabor do bolo e a quantidade de pedaços que Drikinha irá comprar e
retorne a frase do atendente: "Foram x pedaços de bolo de s, então fica z
reais". Onde x é a quantidade de pedaços, s o sabor do bolo e z o total da
compra de Drikinha em reais. Imprima o valor da compra com apenas duas casas
após a vírgula.

A Entrada consiste de:

    Uma string e um número inteiro positivo, representando o sabor do bolo e quantidade de pedaços respectivamente.

A Saída deve apresentar:

    Uma string, como especificado no enunciado.

"""

# Recebe o sabor e o valor na mesma linha e distribui eles em cada variável, sabor e quantidade
sabor, quantidade = input().split()

# Converte quantidade, que é uma string, para um inteiro
quantidade = int(quantidade)

# Mostra na tela a resposta usando print(f"") para definir o número de casas decimais como 2
print(f"Foram {quantidade} pedaços de bolo de {sabor}, então fica {valor*3.25:.2f} reais")
