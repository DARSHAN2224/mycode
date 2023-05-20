n =int(input())
a=[n]
a=list(map(int,input().split()))
count=0
count1=0
# for i in range(n):
#     a.append(int(input()))

for i in range(n):
    if a[i]%2!=0 and i%2!=0:
        count = count+1
    if a[i]%2!=0:
        count1=count1+1
if count==count1:
    print("True")
else:
    print("No")
