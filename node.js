'use strict';

class Human {
  constructor(name, age) {
    this.name = name;
    this.age  = age;
  }
  
  getName() {
    return this.name;
  }

  getAge() {
    return this.age;
  }
}

var human = new Human("Adam", 21);

console.log("My Name is " + human.getName() + " and my age is " + human.getAge());

