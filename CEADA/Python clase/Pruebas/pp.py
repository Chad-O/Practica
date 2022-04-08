def main():
    inicio = int(input("Ingresar un nÃºmero de inicio: "))
    fin = int(input("Ingresar un nÃºmero de fin: "))
    incremento = int(input("Ingresar un nÃºmero de incremento: "))
    lista = []
    derecha = int
    izquierda = int
    nada = int
    medio = int
    valor = int
    extra = []
    for i in range(inicio, fin + 1, incremento):
        lista.append(i * i)
    print(lista)
    for j in range(inicio, fin + 1, incremento):
        valor = j * j
        if (valor) % 3 == 0:
            izquierda = 0
            nada = 1
            derecha = len(lista) - 1
            while izquierda <= derecha and nada != 0:
                medio = (derecha + izquierda) // 2
                if (valor) == lista[medio]:
                    print("El valor mÃºltiplo de 3 '", valor, "' fue encontrado en la posiciÃ³n", medio)
                    nada = 0
                    extra.append(valor)
                elif (valor) < lista[medio]:
                    derecha = medio - 1
                else:
                    izquierda = medio + 1
    print(extra)


if __name__ == "__main__":
    main()
