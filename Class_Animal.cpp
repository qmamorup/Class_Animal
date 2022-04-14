#include<iostream>

class Animal
{
public:
	virtual void makeSound() const = 0;
};

class Cat: public Animal
{
public:
	void makeSound() const override
	{
		std::cout << "Meow\n";
	}
};

class Dog : public Animal 
{
public:
	void makeSound() const override
	{
		std::cout << "Woof\n";
	}
};

int main()
{
	Animal* animals[2];
	animals[0] = new Cat();
	animals[1] = new Dog();

	for (Animal* a : animals)
		a->makeSound();
}