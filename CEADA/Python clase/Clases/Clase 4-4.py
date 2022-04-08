def main():
    N1 = int(input("Ingrese un número "))
    N2 = int(input("Ingrese un segundo número "))
    if N1==N2:
        print("No hay ningún número entre estos")
    elif N1 > N2:
        N2 +=1
        C = 0
        C1 = 0
        B = 0
        while N1>N2:
            C1 = C1+1
            print(N2)
            if N2%2==0:
                C = C+1
                B = B + N2
            N2 = N2+1
    else:
        N1 = N1 +1
        C = 0
        C1 = 0
        B = 0
        while N2 > N1:
            C1 = C1 + 1
            print(N1)
            if N1 % 2 == 0:
                C = C + 1
                B = B + N1
            N1 = N1 + 1

    print("La cantidad de números intermedios es ",C1)
    print("La suma de los números pares es ", B)
    print("La cantidad de números pares es", C)
if __name__ == '__main__':
    main()
