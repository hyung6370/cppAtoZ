# members = {'name': 'HJ', 'age': 28, 'nickname': 'teed'}

# print(members['name'])


# phones = {'아이폰 15': 2023, '아이폰 14': 2022, '아이폰 13': 2021, '아이폰 12': 2020}
# print(phones)

# for phone in phones:
#   print('%s => %s' % (phone, phones[phone]))
  
# print(len(phones))

fruits = {'apple': 2, 'banana': 1, 'pear': 2, 'melon': 0, 'plum': 1}

# key 기준 정렬
res = sorted(fruits)
print(res)

# value 기준 정렬
res = sorted(fruits, key=lambda k : fruits[k])
print(res)