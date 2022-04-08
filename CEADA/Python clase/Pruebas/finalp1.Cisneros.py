def main():
    archivo=open("JUEGOS.txt","r")
    L=[]
    L2=[]
    n=0
    aux=0
    for linea in archivo:
        x = linea.split("")
        L.append(x)
    x = 0
    for linea in archivo:
        x = linea.split(" ")
        y = linea+1.split(" ")
        if x[3] < "15" and x[4] == "SI":
            for i in range(0, len(L)-1):
                for j in range(i+1, len(L)):
                    if x[3]<y[3]:
                        aux= x[3]
                        y[3]=aux
    archivo.close()

if __name__ == '__main__':
    main()