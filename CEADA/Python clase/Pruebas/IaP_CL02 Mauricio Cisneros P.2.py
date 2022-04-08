def main():
    h = float(input("Ingrese la altura del cliente en metros "))
    p = float(input("ingrese el peso de su cliente en kilos "))
    t = 0
    if(h <= 1.60) and (p <= 60):
        print("Debe comprar", t + 2, "metros de tela.")
    elif(h > 1.60):
        print("Debe comprar", t+4+3, "metros de tela")
    else:
        print("Debe comprar", t+5, " metros de tela")
if __name__ == '__main__':
    main()