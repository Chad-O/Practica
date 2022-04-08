def main():
    x = (str.upper(input("Ingrese el codigo del producto")))
    L = []
    d = {}
    while x != "ZZZ":
        y = (str(input("Ingrese los datos del producto. Nombre, marca, descripción y precio. ")))
        L.append(y)
        x = (str.upper(input("Ingrese el codigo del producto. Ingrese zzz para acabar.")))
    for i in range (0, len(L)):
        valor = L[i]
        d[x] = L[i]
    print("El diccionario es", d)

if __name__ == '__main__':
    main()
