def serie(m):
    f = (9 ** m) / 2
    while m >= 0:
        m = m - 2
        f = f + f*(9**(m-1))
    return f


def main():
    m = float(input("Ingrese un número: "))
    print("La suma de la serie es: " ,serie(m))
if __name__ == '__main__':
    main()
