# def average(*scores):
#   sum = 0
#   for i in range(len(scores)):
#     sum += scores[i]
    
#   avg = sum / len(scores)
#   print('%d과목의 평균: %.2f' % (len(scores), avg))
  
# average(80, 90, 100)
# average(75, 80, 94, 78)
# average(80, 73, 76, 86, 82)

# call by value
# def func(X):
#   x = 100
#   print('func(): x = ', x, ', id = ', id(x))
  
# x = 10
# print('메인: x = ', x, ', id = ', id(x))

# func(x)
# print('메인: x = ', x, ', id = ', id(x))

# call by reference
def func(x):
  x[0] = 100
  print('func(): x = ', x, ', id = ', id(x))
  
x = [1, 2, 3]
print('메인: x = ', x, ', id = ', id(x))
# 메인: x =  10 , id =  140207078906448

func(x)
# func(): x =  100 , id =  140207079097808
print('메인: x = ', x, ', id = ', id(x))
# 메인: x =  10 , id =  140207078906448