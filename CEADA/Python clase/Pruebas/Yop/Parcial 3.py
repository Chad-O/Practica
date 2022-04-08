def main():
    x = int(input("Ingrese el número de horas en números enteros, si ingresa -2 el programa termina: "))
    n = 0
    x_total = 0
    x_menosde3 = 0
    while x != -2:
        x_total = x + x_total
        n += 1
        if x < 3:
            x_menosde3 += 1
        x = int(input("Ingrese el número de horas en números enteros, si ingresa -2 el programa termina: "))
    promedio = x_total / n
    print("La cantidad de personas que asistieron a la farmacion son ", n)
    print("El promedio de horas pasadas en la farmacia son " ,promedio)
    print("El total de horas pasadas en la farmacia son ", x_total)
    print("La cantidad de personas que dedicaron menos de 3 horas son", x_menosde3)

if __name__ == '__main__':
    main()