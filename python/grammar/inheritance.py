class Animal:
  def __init__(self, name):
    self.name = name
    
  def printName(self):
    print(self.name)
    
class Dog(Animal):
  def __init__(self, name, sound):
    super().__init__(name)
    self.sound = sound
    
  def printSound(self):
    print(self.sound)
    
dog1 = Dog('행복이', '멍멍!')
dog1.printName()
dog1.printSound()