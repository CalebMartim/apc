"""
NN

Escreva um programa que recebe um número inteiro de dois dígitos, mas representado como um número real com zeros após o ponto decimal. Retorne a parte inteira desse número multiplicado por 100 mais ele mesmo, isto é, um inteiro de quatro dígitos.


A Entrada consiste de:

    Um número inteiro x, tal que 10 ≤ x < 99
 
A Saída deve apresentar:

    Um número inteiro y, tal que 1000 ≤ x < 9999
"""

# Inicializa uma variável chamada n que será a conversão para inteiro do número recebido
n = int(input())

# Mostra na tela a resposta
print(n*100 + n)
