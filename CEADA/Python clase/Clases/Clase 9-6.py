import random
def main():
    L = []
    repetido = 0
    for i in range(0,20):
        a = random.randint(1,10)
        L.append(a)
    print(L)

    for j in L:
        repetido = L.count(j)
        print("Valor ", j, "veces", repetido)
        if repetido > 1:
            for i in range(1, repetido):
                L.remove(j)

    print("lista sin repetidos.")
    print(L)
if __name__ == '__main__':
    main()