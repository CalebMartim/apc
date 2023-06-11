"""
A empresa Satisfação Garantida paga bons salários?

Você recebeu uma lista com todos os colaboradores de uma empresa. A lista
contém o nome do colaborador e o seu salário base em reais, separados por uma
vírgula, um por linha. Você não sabe o tamanho da lista, mas sabe que ela acaba
quando aparece no lugar do nome a palavra "Fim". Te perguntaram se a empresa
paga bons salários. Para responder a esta pergunta você resolveu calcular o
salário médio que a empresa paga.

Elabore um programa que calcule o salário médio da empresa.

A Entrada consiste de:

    De um número indefinido de linhas que termina com uma linha com a palavra
    "Fim" e um salário qualquer. Cada linha contém a string do nome do
    colaborador, seguido do seu salário
    em ponto flutuante com duas casas decimais. O nome e o salário estão
    separados por vírgulas e não por espaços em branco.


A Saída deve apresentar:

    Um número ponto flutuante com duas casas decimais que é a média salarial da
    empresa.

"""

# Usaremos duas variáveis, para a soma, para a quantidade, que usaremos 
# para calcular a média 
soma = 0
quantidade = 0

# O nome e salário é dado numa linha e são separados por uma vírgula
nome, salario = input().split(',')

# Enquanto o nome do funcionário dado não é "Fim" adicionamos um ao contador
# e adicionamos a soma o salario convertido para float, já que o salário 
# pode ser um número racional
while(nome != "Fim"):
    soma += float(salario)
    quantidade += 1
    nome, salario = input().split(',')

# Se a quantidade de funcionários recebido for maior que 0, calcula a média 
# salarial e mostra ela na tela com precisão de de dois pontos decimais 
# caso contrário, apenas mostre 0.00 na tela
# (Isto é feito para prevenir divisão por zero)
    
print(f"{(soma)/(quantidade):.2f}") if quantidade > 0 else print("0.00")
