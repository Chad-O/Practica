def main():
    P = 1
    S = 1000
    z = 0
    N1 = 0
    print("Los números primos entre  1 y 10000 son ")
    for n in range(1, 10000):
        if n > 1:
            for z in range(2, n+1):
                if (n%z) == 0:
                    N1 = n
    else:
        print(N1)


if __name__ == '__main__':
    main()
