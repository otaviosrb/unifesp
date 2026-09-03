anos_exp = int(input('Digite a qtd de anos de experiência: '))
diploma = int(input('O candiDado possui um diploma? (1-Sim / 0-Nao)'))

if anos_exp > 5 and diploma == 1:
    print("Candidato aprovado")
elif anos_exp > 3 or diploma == 1:
    print("Candidato em consideração")
else:
    print("Candidato não aprovado")