""" Áreas

Crie uma função chamada areas() que recebe 3 números inteiros (A, B e C) e calcula, em ordem:

    A área de um retângulo com lados A e B ;
    A área de um triângulo com base B e altura C ;
    A área de um trapézio de altura A , base menor B e base maior C.

Apresente os valores ignorando a parte decimal.

A Entrada consiste de:

    A entrada compreende os parâmetros da função areas(A,B,C) , que são três
    números inteiros, sendo C maior que B.

A Saída deve apresentar:

    Três linhas apresentando os valores solicitados. Para ignorar a parte
    decimal, pode-se utilizar a função int().

"""

# Inicializa uma função que recebe três parâmetros do tipo inteiro e mostra na tela 
# o resultado das fórmulas
# Retângulo: base * altura 
# Triângulo: 1/2(base * altura)
# Trapézio: 1/2((baseMaior + baseMenor)*altura)
# Transforma as duas últimas operações em inteiros para ser descartado a parte racional

def areas(a:int, b:int, c:int):
    print(a*b)
    print(int(b*c*1/2))
    print(int(((b+c)*a)/2))
