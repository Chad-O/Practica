def Op2(x):
    x = int(input("Ingrese nota 1. Para terminar ingrese 0. "))
    na = 0
    nd = 0
    while x != 0:
        if 0 <= x <= 20:
            if x >= 11:
                print("Aprobado")
            else:
                print("Desaprobado")
        y = int(input("Ingrese nota 1: "))
        if 0 <= y <= 20:
            if y >= 11:
                print("Aprobado")
            else:
                print("Desaprobado")
        w = int(input("Ingrese nota 1: "))
        if 0 <= w <= 20:
            if w >= 11:
                print("Aprobado")
            elif
                print("Desaprobado")
        P = (x+y+w)/3
        print("El promedio del alumno es: ",P)
        if P >= 11:
            na+=1
        else:
            nd+=1
        x = int(input("Ingrese nota 1. Para terminar ingrese 0. "))
    print("La cantidad de aprobados es: ",na)
    print("La cantidad de desaprobados es: ",nd)

