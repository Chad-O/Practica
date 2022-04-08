def crear_dict(t):
    n = len(t)
    d = {}
    a = int(n/2)
    for i in range(0,a):
        clave = t[i]
        valor = t[i+(a)]
        d[clave] = valor
    print(d)

def main():
    t = (1,2,3,4,5,6)
    print(t)
    crear_dict(t)
    
if __name__ == '__main__':
    main()