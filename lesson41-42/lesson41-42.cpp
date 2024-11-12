#include <iostream>
//
// Created by Home on 12.11.2024.
//

using namespace std;

class Point {
    public:
    int x;
    int y;

    // конструктор за замовчуванням
    Point() {
        this->x = 0;
        this->y = 0;
        cout << "Point Default constructor\n";
    }

    // конструктор з параметрами
    Point(int x, int y) {
        this->x = x; //point2.x = x;
        this->y = y; //point2.y = y;
        cout << "Point Parametrized constructor\n";
    }
};


class Rectangle
{
    Point leftUpperCorner;
    int width;
    int height;

public:
    // конструктор за замовчуванням
    Rectangle()
    {
        leftUpperCorner.x = 10;
        leftUpperCorner.y = 10;
        width = 0;
        height = 0;
        cout << "Rectangle Default constructor\n";
    }
    // конструктор з параметрами
    Rectangle(int x, int y, int widthP, int heightP)
    {
        leftUpperCorner.x = x;
        leftUpperCorner.y = y;
        width = widthP;
        height = heightP;
        cout << "Rectangle Parametrized constructor\n";
    }
};







int main(int argc, char *argv[]) {
    Point point1;

    Point point2{10, 15};

    // використання конструктора за замовчуванням
    Rectangle rect;

    // використовується конструктор з параметрами
    Rectangle rect1{ 42, 33, 10, 5};

}
