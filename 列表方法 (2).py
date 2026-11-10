s=[1,2,3,5,6,9,8,4,7]
s1=[22,55,1,3,6,99,88,4]
for item in s:
    s1.append(item)
print(s1)
s2=[]
for i in s1:
    if i not in s2:
        s2.append(i)
print(s2)
    
