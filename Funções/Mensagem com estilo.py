"""
Mensagem com estilo

Camila gosta de ficar até tarde conversando com seus amigos. Mas, de vez em
quando, Camila acaba ignorada no seu grupo de mensagens. Ajude ela a criar
mensagens que chamem mais atenção.

Crie uma função chamada estilo()

que receba um símbolo, um número e uma mensagem. O texto final deve ser a
mensagem original, rodeada pela esquerda e pela direita com o símbolo, repetido
um respectivo número de vezes.

A Entrada consiste de:

    Chamada das duas funções, estilo(S,N,M) , com parâmetros S, string com um
    símbolo único, N, número inteiro e M , string com a mensagem inicial.

A Saída deve apresentar:

    Uma linha com a mensagem final de Camila.

"""

# Define a função estilo que recebe três parâmetros do tipo string e mostra na tela 
# a nova string usando operações de concatenação de strings
def estilo(s:str, n:int, t:str):
    print(s*n + t + s*n)
