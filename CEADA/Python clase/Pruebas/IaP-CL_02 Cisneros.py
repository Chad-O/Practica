def main():
    pg =int(input("Ingrese la cantidad de partidos ganados "))
    pe =int(input("Ingrese la cantidad de partidos empatados "))
    pp =int(input("Ingrese la cantidad de partidos perdidos "))
    gf =int(input("Ingrese la cantidad de goles a favor "))
    gc =int(input("ingrese la cantidad de goles en contra "))
    tp = pg+pe+pp
    pptp =tp*3
    pgt =(pg*3)+(pe*1)
    R = pptp/pg
    if R<2:
        print("El rendimiento es óptimo")
    elif R>4:
        print("El rendimiento es deficiente")

    if (gf-gc) < 0:
        print("Requerimos cambio de DT")
if __name__ == '__main__':
    main()