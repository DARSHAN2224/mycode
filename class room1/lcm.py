def gcd(x,y):
    while(y):
        # print(y)
        x,y=y,x%y
    return x

def lcm(x,y):
    print(gcd(x,y))
    lcm1=(x*y)//gcd(x,y)
    return lcm1

n1,n2=map(int,input().split())
print(lcm(n1,n2))
