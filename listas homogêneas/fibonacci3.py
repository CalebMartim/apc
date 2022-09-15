"""
implementar um programa que conte quantas vezes cada chamada da função fibonacci é realizada, para cada valor de entrada diferente da função recursiva. Observe que, ao elaborar seu programa, você deve definir uma função fibonacci que recebe como parâmetro um número inteiro n

fornecido da entrada padrão, e considerá-la na resolução do problema.

Entrada
A entrada consiste em um único inteiro 1≤n≤30

que indica a quantidade de termos da sequência de Fibonacci.

Saída
A saída deve conter uma linha com um inteiro indicando o n
-ésimo termo da sequência de fibonacci, e em seguida outras n+1 linhas com os quantitativos de vezes em que cada função é chamada para um determinado valor menor ou igual a n, conforme os exemplos.
"""

n = int(input())
lista = [0]*31

def fibonacci(num):
    lista[num] += 1

    if num <= 0:
        return 0
    elif num == 1:
        return 1 
    
    fib = fibonacci(num - 1) + fibonacci(num - 2)
    return fib

print(f"termo: {fibonacci(n)}")
print("Quantidades:")

for idx, val in enumerate(lista):
    if val != 0 or idx == 0:
        print(f"fibonacci({idx}) - {val}")