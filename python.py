class Human(object):

  def __init__(self, name, age): 
    self.name = name
    self.age  = age

  def getName(self):
    return self.name

  def getAge(self):
    return self.age

human = Human("Adam", 21)
print("My name is " + human.getName() + " and my age is " + str(human.getAge()));