preco_original = float(input("Digite o preço original: "))
desconto = float(input("Digite a porcentagem do desconto: "))

valor_desconto = preco_original * (desconto / 100)
novo_preco = preco_original - valor_desconto

print(f'Valor com desconto: R$ {novo_preco:.2f}')