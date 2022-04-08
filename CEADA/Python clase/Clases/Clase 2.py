def main():
    M = float(input("Ingresar el monto de sus ahorros "))
    A = 0
    I = 0
    if M >= 1000:
        A = M * 0.04
    if M <= 5000:
        I = M * 0.05
    else:
        I = M * 0.08
    print("Se pagará de interés ", A + I)
if __name__ == "__main__":
    main()
