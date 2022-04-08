def factura():

    n = float(input("Ingrese el precio unitario "))
    p = float(input("Ingrese la cantidad de producto "))
    mt = p * n
    return mt
def main():
    IGV = 1.18
    MTI = factura() * IGV
    if MTI > 100:
        print("Felicidades, se ha hecho acreedor a un descuento!!")
    else:
        print("Lo sentimos, no hay descuento el costo total es, S/." ,MTI)
if __name__ == '__main__':
    main()

