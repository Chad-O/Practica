def tranformador():
    C = 3.5
    n = 0
    dm = 0
    d1 = 0
    xm = 0
    x = float(input("Ingrese el valor en soles."))

    while x>0:
        if x > xm:
            xm = x
        d = x / C
        print("El valor en dolares es: " ,d)

        if d > dm:
            dm = d
        d1 = d1 + d
        d = 0
        n += 1
        x = float(input("Ingrese el valor en soles."))

    prom = d1 / n
    print("El promedio de los valores en dólares es:" , prom)
    print("El mayor valor en dolares es: " ,dm ,"Y su valor respectivo en soles es: " ,xm)
if __name__ == '__main__':
    tranformador()

