import time
def main():

    inicio = time.time()
    print("mensaje")
    fin = time.time()
    print((fin-inicio)*10000000000000000000000000)

if __name__ == '__main__':
    main()