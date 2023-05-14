"""
Filtro de Códigos

Para programar existem alguns requisitos que nossos códigos devem atender
independente do problema. Para isso, algumas perguntas podem ser feitas durante
a implementação de um programa, conforme demonstra o guia abaixo. Sua tarefa é
implementar um programa que ajude os programadores a avaliarem seus códigos da
mesma forma que o guia. A figura apresenta a ordem das perguntas que deverão
ser feitas. 

* Figura * 

A Entrada consiste de:

    Após cada pergunta é lida uma String que pode ser do tipo 'SIM' ou 'NÃO'.

A Saída deve apresentar:

    Todas as perguntas de acordo com as respostas do usuário e por fim uma das
    cinco possíveis respostas finais.

"""

# Como o caso de tutoria pode ser chegado por 3 formas diferentes, é mais 
# sinples criar uma função para este caso
def tutoria():
    ans = input("Já foi na tutoria?\n")
    if(ans == "SIM"):
        print("Choremos!")
    else:
        print("Temos um time a disposição!")

# O problema sempre inicia com essa pergunta
ans = input("O programa funciona?\n")

# Simplesmente segue a árvore de decisões do problema
if(ans == "SIM"):
    ans = input("Você entende o que fez?\n")
    if(ans == "SIM"):
        print("Ótimo. Então não mexe!")
    else:
        tutoria()
else:
    ans = input("Você sabe onde está o erro?\n")
    if(ans == "SIM"):
        ans = input("Acha que pode solucionar sozinho?\n")
        if(ans == "SIM"):
            print("Então mão na massa!")
        else:
            ans = input("Já pesquisou no Google?\n")
            if(ans == "SIM"):
                tutoria()
            else:
                print("Corre lá então!")
    else:
        tutoria()
