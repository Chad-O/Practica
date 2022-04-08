def fact(F):
    if F < 0:
        return 0
    else:

        A = 1
        for i in range (1, F+1):
            A = A * i
        return A

def main():

    F=int(input("Ingresar número "))

    R=fact(F)

    print("El factorial es, " ,R)

if __name__ == '__main__':
    main()
