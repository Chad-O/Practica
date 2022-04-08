import random
def main():
    x = 0
    L = []
    L2 = []
    while x != 100:
        y = random.randint(0,9)
        L.append(y)
        x += 1
    print (L)
    for i in range (0, len(L)):
        if L[i] %2 == 0:
            L2.append(L[i])
        else:
            pass
    print(L2)

if __name__ == '__main__':
    main()
