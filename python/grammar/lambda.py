f = lambda x, y, z: x + y + z
print(f(10, 20, 30))

def mul(n):
  return lambda x: x * n

g = mul(3)
h = mul(5)

print(g(10))
print(h(10))