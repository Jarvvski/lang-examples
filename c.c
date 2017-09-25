#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *name;
  int age;
} Human;

Human* newHuman(char *name, int age) {
  Human *human = malloc(sizeof(Human));
  human->name  = name;
  human->age   = age;
  return human;
}

int main(void) {
  char *name = "Adam";
  int age = 21;

  Human *human = newHuman(name, age);

  printf("My name is %s and my age is %i", human->name, human->age);

  return 0;
}