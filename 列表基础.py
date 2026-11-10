s=[1,2,3,"123","ABC"]
print(type(s))
print(s[0])
print(s[-5])
s[2]=4
print(s)
del s[3]
for i in range(0,4,1):
    print(s[i])
for item in s:
    print(item)
print(s[0:4:1])
print(s[0:-2:1])
s.append(3.14)
print(s)
s.insert(0,3.14)
print(s)
s.remove(1)
print(s)
a=s.pop(3)
print(a)
print(s)
s.sort()
print(s)
s.reverse()
print(s)