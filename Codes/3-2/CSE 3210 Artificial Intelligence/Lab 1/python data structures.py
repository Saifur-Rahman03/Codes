my_list = ['Messi', 'Ronaldo', 'Neymar', 1, 2, 3]

print(my_list[0], my_list[-3])
print(my_list[0:3])

for p in my_list:
    print(p)

for p in range(3):
    print(p)

print(my_list)

my_list.append('Rashford')
print(my_list)

tup1 = (1, 'messi')
tup2 = (2, 'ronaldo')
tup3 = (3, 'neymar')

my_list = [tup1, tup2, tup3]

print(my_list)

for i in my_list:
    print(i[0], i[1])