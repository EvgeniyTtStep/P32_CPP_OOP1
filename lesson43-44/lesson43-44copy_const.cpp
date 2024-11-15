//
// Created by Home on 14.11.2024.
//
#include <iostream>
class Fraction
{
    int numerator;

    int denominator;
public:
    Fraction(int num, int denom) : numerator{ num }, denominator{ denom }
    {
        std::cout << "Fraction constructed for "<< this << '\n';
    }

    Fraction() : Fraction(1, 1) {}

    Fraction(const Fraction& fract): numerator{ fract.numerator }, denominator{ fract.denominator }
    {
        std::cout << "Fraction copy constructed for "<< this << '\n';
    }

    ~Fraction() { std::cout << "Fraction destructed for "<< this << '\n'; }

    void print()
    {
        std::cout << '(' << numerator << " / "<< denominator << ")";
    }
};
int main()
{
    /*
    Створюємо й ініціалізуємо значеннями чисельника
    і знаменника екземпляр Fraction — a
    */
    Fraction a{ 25,39 };
    /*
    Створюємо й ініціалізуємо значеннями чисельника
    і знаменника екземпляр Fraction — b
    */
    Fraction b{ a };

    std::cout << "a = ";
    a.print();

    std::cout << "\nb = ";
    b.print();

    std::cout << '\n';
    return 0;
}