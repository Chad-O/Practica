def main():
    archivo=open("JUEGOS.txt","r")
    archivo2 = open("Juegos2.txt","w")
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
        if x[1] < "10" and x[4] == "SI":
            for i in range(0, len(L)-1):
                for j in range(i+1, len(L)):
                    if x[3]<y[3]:
                        aux= x[]
                        y[]=aux
                        L.append(y)
                        archivo2.write(L + "\n")
                        L=[]
        elif x[4] == "NO":
            L2.append(x)
    archivo2.close()
    archivo.close()
if __name__ == '__main__':
    main()