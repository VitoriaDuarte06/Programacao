a = float(input("Digite o valor do primeiro produto: "))
b = float(input("Digite o valor do segundo produto: "))
c = float(input("Digite o valor do terceiro produto: "))
d = float(input("Digite o valor do quarto produto: "))
e = float(input("Digite o valor do quinto produto: "))

S= a+b+c+d+e

print ("Deve ser pago um total de:", S)

dinheiro = int (input("Digite o valor pago: "))

T= dinheiro - S

print (" Deverá ser devolvido um total de", T, "de troco!")