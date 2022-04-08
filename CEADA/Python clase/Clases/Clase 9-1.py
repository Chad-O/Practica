def main():

    lista = []
    n = int(input("Ingresar un valor: "))
    while n != 0:
        lista.append(n)
        n = int(input("Ingresa otro valor: "))
    print(lista)

if __name__ == '__main__':
    main()