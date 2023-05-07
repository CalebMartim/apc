"""
Crítico de Cinema

Fred tem um blog sobre cinema, onde ele faz resenhas e críticas sobre os novos
lançamentos das telonas. Ao final de cada post, Fred dá uma nota de 0 a 10 para
o novo filme, mas cada nota acaba ficando com uma formatação diferente. Por
isso, Fred pediu sua ajuda para criar uma formatação única para suas notas.

Crie uma função chamada nota(), que recebe um valor de 0 a 10 e cria um linha
formatada com essa nota da seguinte forma:

    Cada linha inicia com uma barra vertical "|";
    São repetidas N estrelas cheias "★", sendo N a nota do filme de 0 a 10;
    São repetidos estrelas vazias "☆" até completar 10 caracteres.
    A linha termina com uma barra vertical "|".


A Entrada consiste de:

    Chamada da função com um parâmetro N, um número inteiro de 0 a 10.

A Saída deve apresentar:

    Uma linha com a nota formatada.

"""

# Usa concatenação de strings para mostrar na tela as n estrelas cheias e as 10-n estrelas 
# vazias para se completar 10 estrelas

def nota(n):
    print(f"|{'★'*n}{'☆'*(10-n)}|")
