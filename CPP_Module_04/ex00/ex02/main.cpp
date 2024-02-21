#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
  AAnimal *animals[20];

  for (int i = 0; i < 20; i++) {
    if (i < 10) animals[i] = new Dog();
    if (i >= 10) animals[i] = new Cat();
  }

  for (int i = 0; i < 20; i++) {
    delete animals[i];
  }

  return 0;
}