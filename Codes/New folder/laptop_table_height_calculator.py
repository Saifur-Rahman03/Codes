import math

def convertToRadian(degree):
    return int(degree) * (math.pi / 180)

len = 24.5 # stand length in centimeters
angles = [[105, 45, 120], [30, 75, 60], [0, 90, 105], [90, 90, 15], [15, 15, 15],
           [15, 30, 30], [15, 45, 45], [30, 60, 45]]

print('A\tB\tC\tHeight\n')

for angle in angles:
    
    if angle[0] > 90:
        prev = angle[0]
        angle[0] = (180 - prev) / 2
        alpha = angle[0] + angle[1]
        alpha = convertToRadian(alpha)
        h = round(len * math.sin(alpha), 1)
        angle[0] = prev
    elif angle[0] == 90:
        prev = angle[0]
        alpha = angle[1] - angle[0]
        angle[0] = 45
        a = convertToRadian(angle[0])
        alpha = convertToRadian(alpha)
        h = round(len * (math.tan(a) + math.sin(alpha)), 1)
        angle[0] = prev
    else:
        alpha = angle[1] - angle[0]
        a = convertToRadian(angle[0])
        alpha = convertToRadian(alpha)
        h = round(len * (math.tan(a) + math.sin(alpha)), 1)
    print(angle[0],'\t', angle[1], '\t', angle[2], '\t', h)
