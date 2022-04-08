def main():
    N = int(input("Ingresar un número entero, si ingresa 0, termina "))
    while N!=0:
        if N % 2 == 0:
            print("El número es par")
        else:
            print("El número es impar")
        N = int(input("Ingresar un número entero, si ingresa 0, termina "))

if __name__ == '__main__':
    main()
