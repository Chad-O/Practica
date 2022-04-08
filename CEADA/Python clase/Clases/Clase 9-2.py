def suma(L):

    L2=[]
    a = 0
    for i in L:
        a = a+i
        L2.append(a)
    return L2

def main():

    lista= []
    n = int(input("Ingresar número: "))
    while n != 0:
        lista.append(n)
        n = int(input("Ingresar número: "))
    print(lista)

    R = suma(lista)

    print (R)

if __name__ == '__main__':
    main()
