def maksimal(a,b):
    if a>b:
        return a
    else:
        return b

def minimal(a,b):
    if a<b:
        return a
    else:
        return b

maks=-100000
minim=100000
bilangan=int(input())
data=map(int,input().split())

for nilai in data:
    maks=maksimal(maks,nilai)
    minim=minimal(minim,nilai)
                          
print(maks,minim)