def max(A, B):
    if A > B:
        print("El mayor es, ", A)
    elif B > A:
        print("El mayor es, ", B)
def main():
    A = input("Ingresar número: ")
    B = input("Ingresar número: ")
    max(A,B)


if __name__ == '__main__':
    main()