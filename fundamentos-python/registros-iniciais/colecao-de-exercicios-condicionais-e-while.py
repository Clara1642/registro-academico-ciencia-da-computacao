
# n= int(input("digite o numero"))
# contador= 0
# numero= 0
# while contador < n:
#         print(numero)
#         numero += 2
#         contador += 1


# senhacorreta=164209
# senha= int(input("digite a senha"))
# while senha != senhacorreta:
#       print("acesso negado")
#       senha= int(input("digite a senha"))
# print("acesso permitido") 



# n1= int(input("digite o numero"))
# n2=int(input("digite o numero"))
# contador= 0
# while contador <= n2:
#     if contador > n1 and contador < n2:
#         print(contador)
#     contador= contador + 1
    


# n= int(input("digite o numero"))
# while n > 0:
#     print(n)
#     n= int(input("digite o numero"))
# print("encerrado")


# n1= int(input("digite o numero"))
# n2= int(input("digite o numero"))
# contador= 0
# numero= 0
# while contador < n2:
#   if numero > n1 and numero < n2:
#     if numero % 2 == 0:
#      if numero % 6 != 0:
#       print(numero)
#   contador += 1
#   numero += 2


# contador= 0
# soma=0
# media=0
# while 0 < 1:
#   n= int(input("digite o numero"))
#   if n > 0:
#     contador= contador + 1
#     soma= n + soma
#     print(soma)
#   if n < 0:
#     media= soma / contador
#     print(media)
#     break


# dia= int(input("digite o dia"))
# mes= int(input("digite o mes"))
# while dia > 31 and mes > 12 or dia > 31 or mes > 12:
#     if dia > 31:
#        print("invalido, digite o dia novamente.")
#        dia= int(input("digite o dia"))
#     if mes > 12:
#        print("invalido,digite o mes novamente.")
#        mes= int(input("digite o mes"))
# if dia <= 31 and mes <= 12:
#  print (f"valido, dia e mes corretos.{dia} / {mes}")


# n= int(input("digite um numero"))
# contador= 0
# while contador < n:
#   print(contador,end = "  ")
#   contador= contador + 2
# print(n)



# soma= 0
# media=0
# quantidade=0
# while True:
#     nota= int(input("digite sua nota"))
#     if nota > 0:
#         quantidade=quantidade + 1 
#         soma=soma + nota
#     if nota < 0:
#         media= soma/quantidade
#         print( quantidade, media )
#         break



# def area_triangulo():
#     base_t= int(input("digite o valor da base"))
#     altura_t= int(input("digite o valor altura"))
#     area_triangulo= base_t * altura_t / 2
#     print(area_triangulo)
#     return base_t,altura_t

# def area_retangulo():
#   base_r= int(input("digite o valor da base"))
#   altura_r= int(input("digite o valor da altura"))
#   if base_r * altura_r:
#      print("area_rentagulo")
#   return base_r,altura_r
  

# quantidade= 0
# soma=0
# while True:
#     n= int(input("digite os números"))
#     if n % 2 != 0:
#         quantidade = quantidade +1  
#     if n != 0:
#      continue
#     if n == 0:
#        print(quantidade)
#        break


# quantidade=0
# soma=0
# while True:
#   n= int(input("digite os números"))
#   if n >= 0:
#     quantidade= quantidade + 1
#     soma = soma + n
#   if soma > 100:
#     print(f" o valor da soma ultrapassou 100 {soma} {quantidade} ")
#     break

contador=3
while True:
  senha= int(input("digite a senha correta"))
  senha_correta=1234
  if senha != senha_correta :
    contador = contador - 1
    print("acesso bloqueado")      
  if senha == senha_correta:
    print("acesso concedido") 
    break
  if contador == 0:
    print("o número tantivoas acabou")
    
    








