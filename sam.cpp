x = [2, 3, 5, 7 , 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199]
y = []
for i in range(0,46):
    for j in range(i+1,46):
        if x[i]*x[j]<=200:
            y.append(x[i]*x[j])

t = int(input())
for k in range(0,t):
    #print(y)
    n = int(input())
    #print(n)
    
    res = 'NO'
    
    for i in y:
        srch = n-i
        for j in y:
            if j==srch:
                res = "YES"
                break
    
        if res=="YES":
            break
    
    print(res)