s = input()
x = s.split(' ')
o = []

for i in x:
    o.append(i[::-1])

for i in range(0, len(o)):
    print(o[i], end= ' ')