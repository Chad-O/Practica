def limites(a,b):
    a = int(input("Ingresar un número natural."))
    b = int(input("Ingresar un número natural"))
    if a < 0 or b < 0:
        print("Vuelve a correr el programa e ingresa numeros mayores a 0")
    else:
        return [a,b]
def main():
    c = 0
    for i in range(limites()):
        if i > 1:
            for r in range (2,i):
                if(r%i) == 0:
                    c = c+1
                    if c >= 5:
                        print("Hay más de 5 numeros primos en el intervalo")
if __name__ == '__main__':
    main()


