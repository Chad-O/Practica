import time
def main():
    inicio = time.time()
    for i in range (0,10000):
        for j in range (0,10000):
            pass
    fin = time.time()
    print("Tiempo transcurrido", (fin-inicio)*1000)
if __name__ == '__main__':
    main()