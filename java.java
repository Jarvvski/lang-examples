class App {
  public static void main(String args[]) {
    Human human = new Human("Adam", 21);

    System.out.println("My Name is " + human.getName() + " and my age is " + human.getAge());
  }
}

class Human {
  private String name;
  private int age;

  Human(String name, int age) {
    this.name = name;
    this.age  = age;
  }

  public String getName() {
    return this.name;
  }

  public int getAge() {
    return this.age;
  }
}