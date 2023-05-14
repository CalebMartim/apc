"""
Média Aritmética, Ponderada e Harmônica

Escreva um programa que leia 3 números inteiros positivos e efetue o cálculo
das médias Aritmética (A), Ponderada (P) e Harmônica (H) dependendo da letra
dada pelo usuário, mostre qual o tipo de média e qual o valor da média. No caso
do usuário digitar qualquer outro caractere, apresente a mensagem 'Operacao
inexistente'.

A Entrada consiste de:

    Linha contendo as três notas que são três números reais positivos. Linha
    contendo um caractere (para determinar qual a média), sendo (P) Ponderada,
    (H) Harmônica e (A) Aritmética Caso o caractere seja 'P', deve-se solicitar
    os três pesos de cada nota enviada, que são números positivos inteiros.

A Saída deve apresentar:

    Na primeira linha, o tipo de média que ele fez ("Harmonica", "Ponderada",
    "Aritmetica" ou "Operacao inexistente") Na segunda linha, caso tenha sido
    digito um caractere válido, o resultado da média com precisão de 2 casas 
    decimais.

"""

# Recebe os inteiros usando compreensão de listas e o tipo da media desejada
n1, n2, n3 = [int(x) for x in input().split()]
tipo = input()

# Média ponderada 
if(tipo == "P"):
    p1, p2, p3 = [int(x) for x in input().split()]
    print(f"Ponderada\n{(n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3):.2f}")

# Média harmônica
elif(tipo == "H"):
    print(f"Harmonica\n{(3)/(1/n1 + 1/n2 + 1/n3):.2f}")

# Média aritmética
elif(tipo == "A"):
    print(f"Aritmetica\n{(n1 + n2 + n3)/(3):.2f}")

# Média inexistente
else:
    print("Operacao inexistente")


