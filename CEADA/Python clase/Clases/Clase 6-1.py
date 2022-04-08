def suma(n):
    if n == 0:
        return 0
    else:
        n = n + suma(n - 1)
        return n


def main():
    n = int(input("Ingrese un número, se sumará con sus anteriores: "))
    resultado = suma(n)
    print(resultado)
if __name__ == '__main__':
    main ()