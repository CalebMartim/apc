quantidade = int(input())
indice = int(input())
lista = []
indices = []
ordenada = []


for i in range(quantidade):
    lista.append([int(x) for x in input().split()])

for item in lista:
    indices.append(item[indice])

indices = sorted(indices)

for i in indices:
    for item in lista:
        if i in item:
            ordenada.append(item)

print(sorted(ordenada))