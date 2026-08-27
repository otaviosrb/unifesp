peso = float(input("Digite o peso (kg): "))
altura = float(input("Digite a altura (m): "))

imc = peso / (altura*altura)

print(f'IMC: {imc:.2f}')