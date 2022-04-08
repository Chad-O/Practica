def main():
    A = int(input("Ingresar el año "))
    if (A % 4) == 0 and ((A % 400) != 0):
            print("El año ", A," es bisiesto")
    else:
        print("El año ", A, " no es bisiesto")

if __name__ == '__main__':
    main()  