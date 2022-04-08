def Lista():
    Cantidad = int(input("Ingrese la cantidad del producto a comprar. Ingrese 0 para terminar. "))
    L1 = []
    L2 = []
    L3 = []
    while Cantidad != 0:
        Precio = float(input("Ingresar el precio del producto anterior. "))
        L1.append(Cantidad)
        L2.append(Precio)
        L3.append(Precio*Cantidad)
        Cantidad = int(input("Ingresar la cantidad del producto a comprar. Ingrese 0 para terminar. "))
    return L3

def main():
    Descuento = sum(Lista)*0.10
    Precio_total = sum(Lista)-Descuento
    print("El precio total es: ", Precio_total)
    print("El descuento es de: ", Descuento)
if __name__ == '__main__':
    main()

