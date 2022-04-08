def notas():
    L = []
    TA = int(input("Ingrese la nota de TA. "))
    Parcial = int(input("Ingrese la ntoa de parcial. "))
    Final = int(input("Ingrese la nota del final. "))
    Subsanado = int(input("Ingrese la ntoa del examen de subsanación. "))

    Prom = int(TA * 1 + Parcial * 1 + Final * 2) / 4
    Prom1 = int(Subsanado * 1 + Parcial * 1 + Final * 2) / 4
    Prom2 = int(TA * 1 + Subsanado * 1 + Final * 2) / 4
    Prom3 = int(TA * 1 + Parcial * 1 + Subsanado * 2) / 4

    NotaFinal = 0

    if Prom > Prom1 and Prom > Prom2 and Prom > Prom3:
        NotaFinal = Prom
        L.append(Final)
        L.append(TA)
        L.append(Parcial)
    elif Prom1 > Prom and Prom1 > Prom2 and Prom1 > Prom3:
        NotaFinal = Prom1
        L.append(Subsanado)
        L.append(Parcial)
        L.append(Final)
    elif Prom2 > Prom and Prom2 > Prom1 and Prom2 > Prom3:
        NotaFinal = Prom2
        L.append(TA)
        L.append(Subsanado)
        L.append(Final)
    elif Prom3 > Prom and Prom3 > Prom1 and Prom3 > Prom2:
        NotaFinal = Prom3
        L.append(TA)
        L.append(Parcial)
        L.append(Subsanado)
    print(L)
    return NotaFinal

def main():
    print(notas)
if __name__ == '__main__':
    main()
