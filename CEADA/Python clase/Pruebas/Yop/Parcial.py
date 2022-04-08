def G(x):
    if x == 0:
        return 25
    elif x == 1:
        return 36
    elif x > 1 and (x % 10) != 0:
        return 8 * (x-1)
    elif x > 1 and x % 10 == 0:
        return 12 + (x-1)

def main():

    x = int(input("Ingrese un número "))
    print("El resultado es", G(x))

if __name__ == '__main__':
    main()