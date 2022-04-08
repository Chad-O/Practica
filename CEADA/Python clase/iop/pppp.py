def main():
    Dicllave = str(input("Ingrese el codigo del producto "))
    Dic = {}
    Valor = ""
    while Dicllave != "zzz":
        Valor = str(input("Ingrese el nombre, marca, descripción y precio del producto "))
        Dic[Dicllave] = Valor
        Valor = ""
        Dicllave = str(input("Ingrese el codigo del producto"))
    print (Dic)
    x = ""
    while x !="zzz":
         x = str(input("Ingrese la llave que quiere buscar"))
         if  Dic.keys() == x:
            Valor2 = str(input("Vuelva a ingresar el nombre, marca, descripción y precio del producto. "))
            Dic[x] = Valor2
    print(Dic)
if __name__ == '__main__':
    main()
