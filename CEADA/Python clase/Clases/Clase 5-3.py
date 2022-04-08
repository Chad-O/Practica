def primo(N):
    P = 1
    for i in range (2,N):
        if N%i == 0:
            P = 0
    return P
def main():
    for i in range(1, 5001):
        P = primo(i)
        if P == 1:
            print("Es primo " ,i)
if __name__ == '__main__':
    main()
