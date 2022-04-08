def decifrar(cod):

    dos = {1: 'A', 2:'B', 3:'C'}
    tres = {1:'D' , 2:'E', 3:'F'}
    cuatro = {1:'G', 2:'H', 3:'I'}
    cinco = {1:'J', 2:'K', 3:'L'}
    seis = {1:'M', 2:'N', 3:'O'}
    siete = {1:'P', 2:'Q', 3:'R',  4:'S'}
    ocho = {1:'T', 2:'U', 3:'V'}
    nueve = {1:'W', 2:'X', 3:'Y', 4:'Z'}
    cod2 = cod
    cod3 = cod
    des = ""
    lista = []
    rep = []
    for l in cod:
        if l == "/":
            lista.append(l)
        if l not in lista:
            lista.append(l)

    for i in lista:
        if i == '2':
            c = 0
            for j in cod2:
                if j != "2":
                    break
                c = c + 1
                cod = cod[1:len(cod)]
            des = des + dos[c]

        elif i == '3':
            c = 0
            for j in cod2:
                if j != "3":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + tres[c]

        elif i == '4':
            c = 0
            for j in cod2:
                if j != "4":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + cuatro[c]

        elif i == '5':
            c = 0
            for j in cod2:
                if j != "5":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + cinco[c]

        elif i == '6':
            c = 0
            for j in cod2:
                if j != "6":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + seis[c]
        elif i == '7':
            c = 1
            for j in cod2:
                if j != "7":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + siete[c]

        elif i == '8':
            c = 0
            for j in cod2:
                if j != "8":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + ocho[c]

        elif i == '9':
            c = 0
            for j in cod2:
                if j != "9":
                    break
                c = c + 1
                cod = cod[1:len(cod)+1]
            des = des + nueve[c]

        elif i=="0":
            des = des + " "
            cod = cod[1:len(cod)]

        des = des + ""
        cod = cod[1:len(cod)]

        cod2 = cod
        # print(cod)
        # print(des)


    return des

def main():

    print(decifrar("ladrillo"))

main()