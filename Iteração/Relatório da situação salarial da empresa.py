""" Relatório da situação salarial da empresa

Você recebeu uma lista com todos os colaboradores de uma empresa. A lista
contém o nome do colaborador e o seu salário base em reais, separados por uma
vírgula, um por linha. A lista tem um tamanho dado N. 

Elabore um programa que imprima um relatório com a média salarial da empresa, o
nome do colaborador com o maior salário e o seu salário, o nome do colaborador
com o menor salário e o seu salário. Não usar listas ou dicionários para fazer
esta questão.

A Entrada consiste de:

    De um número inteiro N

na primeira linha, o número de colaboradores na empresa. N

    linhas contendo uma string com o nome do colaborador, seguido do seu
    salário em ponto flutuante com duas casas decimais. O valor do salário é
    maior do que R$ 0.00 e menor do que R$ 1000000000,00. O nome e o salário
    estão separados por vírgulas e não por espaços em branco.


A Saída deve apresentar:

    O valor da média salarial da empresa na primeira linha, com duas casas
    decimais; Se não houver média imprimir "Não tem média". Na segunda linha o
    nome do colaborador com maior salário  e o seu salário; Na terceira linha o
    nome do colaborador com menor salário  e o seu salário; caso  não haja o
    maior ou menor salário, imprimir a  string "Não tem".

"""

# Misturamos as últimas questões todas para esta. Guardamos a soma para calcular a média,
# os nomes das pessoas com maiores e menores salários e os valores dos menores e maiores 
# salários, inicializados em infinito e menos infinito reespectivamente
soma = 0
pessoaComMenorSalario = ""
pessoaComMaiorSalario = ""
menorSalario = float('inf')
maiorSalario = float('-inf')

# Recebe a quantidade de funcionários a serem recebidos
quantidade = int(input())

# Usa um for loop para receber os funcionários
for x in range(quantidade):
    pessoa, salario = input().split(',')

    # O salário atual é transformado em float e é somado a soma
    salario = float(salario)
    soma += salario

    # Se ele for menor ou maiore do que o menor ou maior recebido até agora 
    # atualizamos estes valores
    if(salario > maiorSalario):
        maiorSalario = salario
        pessoaComMaiorSalario = pessoa
    if(salario < menorSalario):
        menorSalario = salario
        pessoaComMenorSalario = pessoa
    
# Mostra na tela os dados pedidos, se eles foram devidamente recebdos.
# Caso contrário, avisamos isto 
print(f"{(soma)/(quantidade):.2f}") if quantidade > 0 else print("Não tem média")
print(f"{pessoaComMaiorSalario} {maiorSalario:.2f}") if maiorSalario != float('-inf') else print("Não tem")
print(f"{pessoaComMenorSalario} {menorSalario:.2f}") if menorSalario != float('inf') else print("Não tem")
