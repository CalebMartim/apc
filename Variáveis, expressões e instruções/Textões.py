""" Textões

Malu utiliza uma rede social muito famosa, conhecida por permitir que você se
expresse sobre os mais diversos e importantes temas da atualidade, perpetuando
sempre questionamentos relevantes. Essa rede social, no entanto, preza pela
objetividade acima de tudo, e desde sua fundação tem o histórico de permitir
apenas uma quantidade limitada de caracteres por postagem, para que as pessoas
não gastem tempo demais lendo sobre apenas um assunto. 

Alguns usuários, no entanto, arrumaram um método sorrateiro para poder escrever
longos e tediosos textos e assim ocupar o tempo de todos os usuários da rede.

Para salvar a todos deste destino terrível, você tem a missão de criar uma
ferramenta capaz de detectar os chamados "textões" da internet. Considere que
um adulto médio consegue ler aproximadamente de 1200 a 1550 caracteres por
minuto.

Dada uma postagem qualquer, calcule o tempo necessário para que um adulto médio
consiga ler todo seu conteúdo. Mostre em duas linhas diferentes o pior tempo
estimado e o melhor tempo estimado (em minutos), com uma precisão de 3 casas
decimais.

A Entrada consiste de:

    Uma string S contendo todo o texto da postagem.


A Saída deve apresentar:

    Na primeira linha, o pior tempo de leitura estimado em minutos sob a
    seguinte formatação: "Pior dos casos: PC", onde PC é um número real (de ponto
    decimal) que representa o pior tempo estimado com três casas decimais de precisão.
    Na segunda linha, o melhor tempo de leitura estimado em minutos sob a
    seguinte formatação: "Melhor dos casos: MC ", onde MC é um número real que
    representa o melhor tempo estimado com três casas decimais de precisão.

"""

# Recebe o texto 
s = input()

# A pior velocidade será dada por quantos caracteres consegue-se ler por minuto na pior velocidade
print(f"Pior dos casos: {len(s)/1200:.3f}")

# Quanto que a melhor velocidade será dada por quantos caracteres consegue-se ler por minuto na melhor velocidade
print(f"Melhor dos casos: {len(s)/1550:.3f}")
