import math
num=int(input('Enter the number :'))
def maxPrimefactor(num):
    maxprime=-1
    while num%2==0:
        maxprime=2
        num>>=1 #num/2
    for i in range(3,int(math.sqrt(num)+1),2):
        while num%i==0:
            maxprime=i
            num/=i3
    if num>2:
        maxprime=num
    return maxprime

print(maxPrimefactor(num))