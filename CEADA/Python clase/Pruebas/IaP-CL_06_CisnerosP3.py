def main():
    tupla = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    x = int(input("Ingrese un numero. Si ingresa -2 termina."))
    while x != -2:
            if tupla.index(x) == x:
                for x in range(0, len(tupla)):
                    print("El contenido en esta posición es, ", tupla[x])
                    x = int(input("Ingrese un numero. Si ingresa -2 termina."))
            else:
                print("Error la posición no es válida.")
                x = int(input("Ingrese un numero. Si ingresa -2 termina."))

if __name__ == '__main__':
    main()
