n = int(input("Digite um número: "))

if 1 <= n <= 100:
    if n % 2 == 0:
        print("Par")
    else:
        print("Impar")

    if n % 3 == 0:
        print("Multiplo de 3")
    if n % 5 == 0:
        print("Multiplo de 5")

else: 
    print("O número não está entre 1 e 100")