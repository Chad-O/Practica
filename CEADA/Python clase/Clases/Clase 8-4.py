import time
import random

def main():
    inicio = time.time()
    for i in range (0,10000):
        if random.randint(0,9)==5:
            for j in range (0,1000):
                pass
    fin = time.time()
    print("El tiempo transcurrido es", (fin-inicio)*1000)

if __name__ == '__main__':
    main()