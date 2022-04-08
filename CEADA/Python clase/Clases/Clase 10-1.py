import random

def poker(L1,L2):
    print(L1)
    print(L2)
    if L1[0] == L1[1] and L1[0] == L1 [2] and L1[0] == L1 [3]:
        return "Tiene poker"
    elif L1[1] == L1[2] and L1[1] == L1 [3] and L1[1] == L1 [4]:
        return "Tiene poker"
    else:
        return "No tiene poker"

def main():

    TN = ("A","2","3","4","5","6","7","8","9","10","J","Q","K")
    TP = ("Corazones", "Espadas", "Trebol", "Diamante")
    L1 = []
    L2 = []
    for i in range (0,5):
        n = random.randint(0,12)
        p = random.randint(0,3)
        n1 = TN [n]
        p1 = TP [p]
        L1.append(n1)
        L2.append(p1)
    R = poker (L1,L2)
    print (R)

if __name__ == '__main__':
    main()

