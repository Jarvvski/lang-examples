#include <iostream>
#include <string>

using namespace std;

class Human {
  private:
    string name;
    int age;

  public:
    Human(string name, int age);
    string getName(void);
    int getAge(void);
};

Human::Human(string name, int age) {
  this->name = name;
  this->age  = age;
}
string Human::getName(void) {
  return this->name;
}
int Human::getAge(void) {
  return this->age;
}

int main() {
  string name = "Adam";
  int age     = 21;

  Human human(name, age);

  cout << "My name is " << human.getName() << " and my age is " << human.getAge() << endl;

  return 0;
}