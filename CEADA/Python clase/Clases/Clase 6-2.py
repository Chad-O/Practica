def suma(m):
    if m == 1:
        return 1
    else:
        return 1 / m + suma(m - 1)


def main():
    m = int(input("Ingresar un número "))
    resultado = suma(m)
    print(resultado)


if __name__ == '__main__':
    main()
