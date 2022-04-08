def main():
    L = []
    for i in range(1,11):
        n = int(input("Ingrese número: "))
        L.append(n)
    print("Lista ingresada:")
    print(L)

    L.sort(reverse=True)

    print("Lista descendente.")
    print(L)
if __name__ == '__main__':
    main()