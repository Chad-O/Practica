def main():
    N = int(input("Ingresar un número entero, si ingresa un número negativo, termina "))
    A = 0
    while N >= 0:
        if N % 2 == 0:
            print("El número es par")
            A = A + N
        else:
            print("El número es impar")
        N = int(input("Ingresar un número entero, si ingresa un número negativo, termina "))
    print("La suma de los números pares es ", A)
if __name__ == '__main__':
    main()