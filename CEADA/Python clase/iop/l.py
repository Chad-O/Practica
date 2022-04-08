def reversa(n):
    d = 0
    rev = 0
    while n>0:
        d=n%10
        n=int(n/10)
        rev=rev*10+d
    return rev

def esPalindromo():
    x = int(input("Ingresa el número: "))
    r =  reversa(x)
    print("Número: " ,x)
    print("Reversa : " ,r)
    if x == r:
        print("Es palindromo")
    else:
        print("No es palindromo")
if __name__ == '__main__':
    esPalindromo()