def main():
    hex = input("Ingresa el numero en hexa ")
    scale = 16
    num_of_bits = 8
    print(bin(int(hex, scale))[2:].zfill(num_of_bits))
if __name__ == '__main__':
    main()