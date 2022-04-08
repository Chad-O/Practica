def main():
    f = 1
    n = int(input("ingrese un numero natural "))
    for i in range (1, n+1):
        f = f*i
    print("El factorial del numero es " ,f)
if __name__== "__main__":
    main()
