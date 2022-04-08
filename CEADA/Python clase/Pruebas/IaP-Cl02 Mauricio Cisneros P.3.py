def main():
    M = float(input("Ingrese el monto de ventas de productos de maquillaje en soles "))
    C = float(input("Ingrese el monto de ventas de productos para el cabello en soles "))
    P = float(input("Ingrese el monto de ventas de productos para el cuidado de la piel en soles "))
    CM = 0.1
    CC = 0.15
    CP = 0.2
    Ba = 0
    if (C+P > 1000):
        Ba = Ba + 500
    if (C + P + M > 5000):
        CM = 0.15
        CC = 0.2
        CP = 0.25
    Tot = Ba + (M * CM) + (C*CC) + (P*CP)
    print("La comisión por la venta de maquillaje es: ", M * CM)
    print("La comisión por la venta de productos para el cabello es: ", C * CC)
    print("La comisión por la venta de productos para el cuidado de la piel es: ", P*CP)
    print ("La comisión total es, ", Tot )
if __name__ == '__main__':
    main()