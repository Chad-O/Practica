def contar_formas(m,n,memo = {}):
    key = str(m)+ "," + str(n)
    if(m == 1 and n == 1):
        return 1
    elif(m == 0 or n == 0):
        return 0
    elif(key in memo.keys()):
        return memo[key]
    else:
        memo[key]  =  contar_formas(m-1,n,memo) + contar_formas(m,n-1,memo)
        return memo[key] 

if __name__ == "__main__":
    m = input()
    n = input()
    val = contar_formas(m,n,{})
    print("{m} & {n} ---> {val}")