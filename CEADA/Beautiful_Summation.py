val = input()
arr = val.split(" ")

p = int(arr[0])
q = int(arr[1])
n = int(arr[2])
m = int(arr[3])
ans = 0

def exponentMod(A, B, C):
     
    if (A == 0):
        return 0
    if (B == 0):
        return 1
     
    y = 0
    if (B % 2 == 0):
        y = exponentMod(A, B / 2, C)
        y = (y * y) % C
     
    else:
        y = A % C
        y = (y * exponentMod(A, B - 1,
                             C) % C) % C
    return ((y + C) % C)
    
val1 = p
for i in range (1,n+1):
    ans += exponentMod(i,q,m)*val1%m
    val1 = (p*val1)%m 
ans = ans%m
print(ans)
