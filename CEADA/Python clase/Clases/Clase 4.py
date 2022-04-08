def calculo_anual():
    precio = 100000
    cuenta_M = 1
    while cuenta_M <= 12:
        precio_inc = precio * 1.05
        print("Mes: ", cuenta_M, "Precio: ", precio)
        precio = precio_inc
        cuenta_M = cuenta_M+1
if __name__ == '__main__':
    calculo_anual()
