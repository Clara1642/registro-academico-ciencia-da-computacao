# n1= (int(input("digite o número")))
# n2=(int(input("digite o numero")))
# soma=n1
# while soma<=n2:
#     if soma % 2 ==0 and soma% 6 !=0:
#         print(soma)
#     soma = soma + 1    


# numeros=int(input("digite os números"))
# contador=1
# soma= numeros 
# media = soma / contador
# while numeros > 0:
#     numeros= int(input("digite os números"))
#     if numeros > 0:
#       soma = numeros + soma
#       print(soma)
#       contador = contador + 1
#     if numeros < 0:
#         media = soma / contador
#         print(media)
#         break

    
# dia= int(input("digite o número"))
# mês= int(input("digite o número"))
# contador=1
# while contador > 0:
#     if dia > 31 and mês > 12:
#        print("invalido")
#        dia= int(input("digite o número"))
#        mês= int(input("digite o número"))
#        continue
#     contador+=1
#     if dia <= 31 and mês <= 12:
#        print("valido")
#        break

# for i in range(10):
#    print(i)

# for i in range(5,10):
#     print(i)

# for i in range (0,10,2):
#     print(i)

    
# letras=(input("digite a palavra"))
# for i in letras:
#     print(i)

# n1= int(input("digite o numero"))
# n2= int(input("digite o numero"))
# for i in range(n1,n2 + 1):
#    if i % 2 != 0:
#     print(i)

# n1= int(input("digite o numero"))
# n2= int(input("digite o numero"))
# soma=0
# for i in range(n1,n2 + 1):
#     soma= soma + i
# print(soma)


# letras=(input("digite a palavra"))
# contador=0
# for i in letras:
#   if i == "a":
#     contador = contador + 1
# print(contador)


# n1= int(input("digite o numero"))
# n2= int(input("digite o numero"))
# soma= 0
# media= 0
# quantidade= 0
# for i in range (n1,n2 + 1):
#     soma=soma + i
#     quantidade=quantidade + 1
#     media= soma/quantidade
# print(media)

# fatoraçao= int(input("digite o numero"))
# n= 1
# for i in range(fatoraçao,0,-1):
#  n= i * n
# print(n)


# fatorial = int(input("Digite o número que deseja saber o fatorial: "))
# mult = 1
# for i in range(fatorial,0,-1):
#     mult = i * mult
# print(mult)




# n= int(input("digite o numero"))
# contador=0
# soma=0
# for i in range(0,n + 1):
#     contador=contador + 1
#     soma= soma + i
# print(soma)


n= int(input("digite o numero"))
soma= 0
for i in range(1, n + 1 ):
  if n % i == 0 and i < n:
      soma = soma + i
if soma == n:
    print("numero perfeito")
else:
      print("numero imperfeito")