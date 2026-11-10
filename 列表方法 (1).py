s=[]
for i in range(0,10):
    a=int(input())
    s.append(a)
s.sort()
print(s)
print(s[0])
print(s[9])
print(sum(s)/len(s))
