def main():

    palote=int(input("Mete tu palote "))
    tiempo=int(input("Cuanto tiempo ha pasado: "))
    stack=tiempo*12
    palito=70

    palitopene=("40%")
    botaspene=(15)

    magia=palote+stack+palito
    magiapalote=magia*40/100
    magiayes=magia+magiapalote
    primordial=325+(75*magiayes/100)

    print("Shedo: Que items tiene el Veigar?")
    print("Oscar: Rabadon, Void Staff y botas nada mas")
    print("a Shedo le cae una R que hace",primordial)
    print(botaspene,"mas",palitopene,"de penetracion")
    if primordial>700:
        print("Chamorro: PUASU")
if __name__ == '__main__':
    main()