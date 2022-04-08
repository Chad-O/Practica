def suma(m):
    if m < 10:
        return m
    else:
        return m%10 + suma(int(m/10))

def main():
    m = float(input("Ingrese un número decimal "))
    print (m)
    while m%10 != 0:
        m = m*10
        print (m)
    resultado = suma(int(m))
    print(resultado)
if __name__ == '__main__':
    main()


