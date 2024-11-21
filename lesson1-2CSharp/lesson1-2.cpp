#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Animal {
    public:
        int age;
        int height;
        int weight;

    Animal(int age, int height, int weight): age(age), height(height), weight(weight) {}

    Animal(): Animal(0, 0, 0) {
       // cout << "Animal constructor" << endl;
    };

    virtual void eat() {
        cout << "Animal::eat" << endl;
    }

    virtual void show() {
        cout << "Animal::show" << endl;
    }

};

class Dog: virtual public Animal {


    private:
        string furColor;


    public:
    Dog(): Animal(0, 0, 0) {
       // cout << "Dog constructor" << endl;
    }

    Dog(int age, int height, int weight): Animal(age, height, weight) {}

    Dog(int age, int height, int weight, string furColor): Animal(age, height, weight), furColor(furColor) {}


    void eat() override {
        cout << "Dog is eating" << endl;
    }

    void eat(int count) {
        cout << "Dog is eating "<< count <<" times."<<endl;
    }

    void show() override {
        cout << "Dog shows" << endl;
    }

};


class Cat: virtual public Animal {

    protected:
        string catName;

    public:
    Cat(): Animal(0, 0, 0) {
       // cout << "Cat constructor" << endl;
    }

    void show() override {
        cout << "Cat shows" << endl;
    }

    void eat() override {
        cout << "Cat is eating" << endl;
    }

};

class Pitbul: public Dog, public Cat {

    public:
    Pitbul() {
        catName = "Pitbul";
        //cout << "Pitbul constructor" << endl;
    }

    void eat() override {
        cout << "Pitbul is eating" << endl;
    }

    void show() override {
        cout << "Pitbul shows" << endl;
    }
};



int main() {
    // Dog* dog = new Dog(5, 10, 20, "red");
    // dog->eat();


    // Animal* dog1 = new Dog(5, 10, 20, "red");
    // dog1->eat();


    // Animal* pitbul = new Pitbul();
    // pitbul->eat();
    //Pitbul pitbul = Pitbul();



    //динамічна диспетчеризація
    // Animal *animal = new Animal(5, 10, 15);
    // animal->show();
    //
    // animal = new Dog();
    // animal->show();
    //
    // animal = new Cat();
    // animal->show();



    //динамічне зв'язування
    // Pitbul *pitbul = new Pitbul();
    // Dog *dog = new Pitbul();
    // Cat *cat = new Pitbul();
    // Animal *animal = new Pitbul();
    //
    // pitbul->eat();
    // dog->eat();
    // cat->eat();
    // animal->eat();

}