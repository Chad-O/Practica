def interes(m1, m2):
    if m1 > 1500 and m2 > 1500:
        return (m1 + m2) * 0.03
    elif (m1 > 1000 or m2 > 1000) and ((m1 + m2) / 2) > 500:
        return (m1 + m2) * 0.05
    else:
        return (m1 + m2) * 0.10


def main():
    m1 = float(input("Ingrese sus ingresos del mes anterior "))
    m2 = float(input("Ingrese sus ingresos de hace 2 meses "))
    print("El valor de los intereses a pagar es ", interes(m1, m2))


if __name__ == '__main__':
    main()
