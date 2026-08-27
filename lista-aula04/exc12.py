#print (2 ** 5) 32

n = int(input("Digite um número entre 2 e 9: "))

for expoente in range(2, 11):
    resultado = n ** expoente
    print(f"{n} ** {expoente} = {resultado}")