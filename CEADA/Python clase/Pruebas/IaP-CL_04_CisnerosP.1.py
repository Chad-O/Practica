def funcion(x):
    if x <= 5:
        return 4
    else:
        return 32 + (x-1)

def main():

    x = int(input("Ingrese un número: "))
    print("La respuesta es:" ,funcion(x))

if __name__ == '__main__':
    main()