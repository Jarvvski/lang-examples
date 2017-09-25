<?php

$human = new Human("Adam", 21);
echo "My name is " . $human->getName() . " and my age is " . $human->getAge();

class Human {
  private $name;
  private $age;

  public function __construct($name, $age) {
    $this->name = $name;
    $this->age = $age;
  }

  public function getName() {
    return $this->name;
  }

  public function getAge() {
    return $this->age;
  }
}