x,y=map(int,input().split())
# x,y,lcm
t=y,t2=x
while(y):
        temp=x 
        x=y 
        y=temp%y
lcm=(t2*t)/x
print("%d",lcm)