def resto(x):
    C = 0
    if x % 2 != 0:
        while C <= 20:
            x = x + (x - 2)
            x = x - 2
            C = C + 1
        return x
    elif x % 2 == 0:
        while C <= 15:
            x = x + (x - 2)
            x = x - 2
            C = C + 1
        return x
def main():
    x = int(input("Ingrese un número: "))
    if x % 2 != 0:
        print("El valor de la suma de los 20 números impares anteriores es: ", resto(x))
    elif x % 2 == 0:
        print("El valor de la suma de los 15 números pares anteriores es: ", resto(x))


if __name__ == '__main__':
    main()