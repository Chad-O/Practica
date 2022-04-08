def main():
    L = []
    mayor = 0
    n = int(input("Ingresar número de estudiantes: "))
    for i in range (0,n):
        nota = int(input("Ingrese la nota: "))
        if nota > mayor:
            mayor = nota
        if nota >= 8:
            T = "A"
        elif nota >= 6:
            T = "B"
        elif nota >= 4:
            T = "C"
        elif nota >= 2:
            T = "D"
        else:
            T = "E"
        L.append(T)

    print("La mayor nota es: ", mayor)
    print(L)
if __name__ == '__main__':
    main()

