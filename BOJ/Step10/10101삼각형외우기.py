a = [int(input()) for i in range(3)]

if a.count(60) == 3:
    print("Equilateral")
elif sum(a) == 180 and len(set(a)) == 2:
    print("Isosceles")
elif sum(a) == 180 and len(set(a)) == 3:
    print("Scalene")
else:
    print("Error")
    
    
    
    
# a = int(input) 
# b = int(input)
# c = int(input)

# if sum(a, b, c) == 180:
#     if a == b == c == 60:
#         print("Equilateral")
#     elif a == b or b == c or a == c:
#         print("Isosceles")
#     else:
#         print("Scalene")
# else:
#     print("Error")   