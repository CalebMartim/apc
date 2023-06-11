"""
Fibonacci II 

Na matemática, a Sequência de Fibonacci, é uma sequência de números inteiros,
começando por 0, na qual, cada termo subsequente corresponde à soma dos dois
anteriores. Os números de Fibonacci são, portanto, os números que compõem a
seguinte sequência:

    0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,…


Curioso com a Sequência de Fibonacci, onde cada termo subsequente corresponde à
soma dos dois anteriores, e os dois primeiros valores da sequência são 0 e 1,
dessa vez você resolveu imprimir todos os valores da sequência. Implemente uma
função chamanda fibonacci que tem como parâmetro n e imprime os primeiros
n-termos da sequência de fibonacci.

A Entrada consiste de:

    A função fibonacci recebe como parâmetro um único inteiro 1 ≤ n ≤ 30 que
    indica a quantidade de termos da sequência.


A Saída deve apresentar:

    Uma linha com todos os n termos da Sequência de Fibonacci, separados por
    espaços, conforme os exemplos.

"""

# Como não podemos usar funções recursivas ainda nem listas. Uso duas variáveis
# auxiliares Que representam fibonacci(n - 2) e fibonacci(n - 1) que serão
# atualizados com quanto mais n aumenta
def fibonacci(n:int):
    menosDois = 0;
    menosUm = 1;

    # Como n é pelo menos 1, sempre teremos que mostrar 0
    print(0, end=" ")

    # Se n for maior que 1 temos certeza que 1 será mostrado
    if(n > 1):
        print(1, end=" ")

    # Iterativamente mostrando fibonacci de 2 até n
    for x in range(2, n):
        # Fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) então 
        # mostramos isso na tela
        print(menosDois + menosUm, end = " ")

        # Usamos uma variável auxiliar para guardar o último valor de menosDois 
        # já que este será atualizado
        tempDois = menosDois
        menosDois = menosUm
        menosUm += tempDois

    # Dá uma quebra de linha no fim
    print()
