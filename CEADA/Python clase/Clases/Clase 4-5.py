def main():
    A = 0
    N1 =  int(input("Ingrese un número entero "))
    for i in range (2,N1):
        if N1 % i == 0:
            A = 1
if __name__ == '__main__':
    main()
