import random
def main():
    L = []
    suma = 0
    for i in range (0,100):
        a = random.randint(1,10)
        L.append(a)
        suma += a

    promedio = float(suma)/100
    M = 0
    D = 0
    for i in L:
        if promedio > i:
            D += 1
        elif promedio < i:
            M += 1

    print("La cantidad mayor al promedio es: ",M)
    print("La cantidad menor al promedio es: ", D)
if __name__ == '__main__':
    main()
