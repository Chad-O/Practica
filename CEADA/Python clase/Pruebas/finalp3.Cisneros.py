def Guardatos(archivo,Dic):
    A = open(archivo, "w")
    for i in Dic:
        a = Dic[i]
        b = a[0]
        c = a[1]
        men = str(i) + "," + " " + str(b) + "," + " " + str(c) + "\n'"
        A.write(men)
    A.close()

def main():
    Dic = {}
    L = []
    s = 0
    cod = input("Ingrese el código del empleado. ")
    nom = input("Ingrese el nombre del empleado. ")
    sal = input("Ingrese el salario del empleado. ")
    L.append(nom)
    L.append(sal)
    Dic[cod]=L
    s = input("Si desea terminar ingrese N. ")
    L=[]
    while s != "N":
        cod = input("Ingrese el código del empleado. ")
        nom = input("Ingrese el nombre del empleado. ")
        sal = input("Ingrese el salario del empleado. ")
        L.append(nom)
        L.append(sal)
        Dic[cod] = L
        s = input("Si desea terminar ingrese N. ")
        L=[]
    print(Dic)
    print(L)
    archivo = "empleados.txt"
    Guardatos(archivo, Dic)
if __name__ == '__main__':
    main()
