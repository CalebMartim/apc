"""
Onde está o fim?

Você recebeu uma lista com todos os colaboradores de uma empresa. A lista
contém o nome do colaborador, um por linha. Você não sabe o tamanho da lista,
mas sabe que ela acaba quando aparece no lugar do nome a palavra "Fim".

Elabore um programa que conte a quantidade de colaboradores da empresa.

A Entrada consiste de:

    um número indefinido de linhas que termina com uma linha com a palavra "Fim";
    cada linha contém a string do nome do colaborador.


A Saída deve apresentar:

    Um número inteiro que é a quantidade de funcionários.
"""

# Variável que irá contar o número de nomes recebidos
contador = 0;

# Recebe o primeiro nome
nome = input()

# Enquanto o nome recebido não for fim, tem se um 
# funcionário, logo o contador aumenta
while(nome != "Fim"):
    nome = input()
    contador += 1

# Mostra o contador na tela
print(contador)
