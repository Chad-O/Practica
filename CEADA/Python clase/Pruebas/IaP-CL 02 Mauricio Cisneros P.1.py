def main():
    X = float(input("Insertar la cantidad del insumo en la pintura producida, "))
    if (X < 25):
        print("Es pintura base.")
    elif (X >= 25) and (X < 50):
        print("Es pintura interior.")
    else:
        print("Es pintura exterior.")
if __name__ == '__main__':
    main()