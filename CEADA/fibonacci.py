def fibonnacci(n,memo):
    if(n==1):
        return 1
    elif(n==2):
        return 1
    elif(n in memo):
        return memo[n]
    else:
        val = fibonnacci(n-1, memo)+fibonnacci(n-2, memo)
        memo[n] = val 
        return val

if __name__ == "__main__":
    for i in range(1,101):
        print(i-1,"-->", fibonnacci(i,{}))