//
// Created by Home on 14.11.2024.
//
#include <cstdint>
#include <cstring>
#include <iostream>


class Person
{
    char* name;
    uint16_t age;
    uint32_t socialId;
public:
    Person(const char* nameP, uint16_t ageP,
    uint32_t socialIdP)
    : name{ nameP ? new char[strlen(nameP) + 1] :
    nullptr },
    age{ ageP },
    socialId{ socialIdP }
    {
        if (name)
        {
            strcpy_s(name, strlen(nameP) + 1, nameP);
        }
        std::cout << "Person constructed\n";
    }


    Person() : Person{ nullptr, 0, 0 } {}
    /*
    Конструктор за замовчуванням делегує
    (перенаправляє) свою роботу конструктору
    з параметрами, вказуючи бажані параметри.
    */
    Person(const char* nameP) : Person{ nameP, 0, 0 } {}

    Person(const char* nameP, uint16_t ageP) :Person{ nameP, ageP, 0 } {}

    ~Person()
    {
        delete[] name;
        std::cout << "Person destructed\n";
    }
    void print()
    {
        if (name)
        {
            std::cout << "Name: " << name << '\n'
            << "Age: " << age << '\n'
            << "SocialID: " << socialId
            << '\n';
        }
        else
        {
            std::cout << "[empty person]" << '\n';
        }
    }
};
// int main()
// {
//     Person nobody;
//     nobody.print();
//     Person person1{ "Petro Petrenko" };
//     person1.print();
//     Person person2{ "Ivan Ivanenko", 25 };
//     person2.print();
//     Person person3{ "Pavlo Pavlenko", 42, 123456789 };
//     person3.print();
//     return 0;
// }