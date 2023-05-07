"""
Padrão Triangular?

O programa a seguir deveria imprimir 8 linhas exibindo um padrão visualmente
triângular usando-se apenas as instruções e outros recursos que aprendemos até
agora. Corrija os erros de sintaxe e de lógica para que ele imprima o padrão 16
vezes como em uma tabela 4x4. 

A Entrada consiste de:

    3 caracteres em uma linha, separados por espaços em branco.Cada caracter
    representa um lado do triângulo.


A Saída deve apresentar:

    O resultado deve ser um padrão triângular 4x4

"""


s1, s2, s3 = input().split()

def duplica(f):
    f()
    f()
        # Havia aqui uma chamada da função f() adicional

def duplica_o_duplicado(f):
    duplica(f)
    duplica(f)

def imprime_parte_linha1():
    print(" "+s1+s2+" ", end="") # Existia um '+' adicional
    
def imprime_parte_linha1_fim():
    print("")
    
def imprime_parte_linha2():
    print(s1+2*s3+s2, end="")
    
def imprime_parte_linha2_fim():
    print(" ")
      
def imprime_linha1():
    duplica_o_duplicado(imprime_parte_linha1)
    imprime_parte_linha1_fim()

def imprime_linha2():
    duplica_o_duplicado(imprime_parte_linha2)
    imprime_parte_linha2_fim()
    
def imprime_parte_padrão():
    imprime_linha1()
    imprime_linha2() # Existia um - ao invés de _

def imprime_padrão():
    duplica_o_duplicado(imprime_parte_padrão)
    
imprime_padrão()
