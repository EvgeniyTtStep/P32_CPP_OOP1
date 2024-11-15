//
// Created by Home on 14.11.2024.
//
#include <iostream>
class Demo
{
public:
    int personal;
    static int common;

    Demo(int personal) : personal(personal) {
        common ++;
    }


};

int Demo::common{ 0 };


// int main()
// {
//     // створюємо екземпляр та ініціалізуємо
//     // персональне поле personal для d1
//     Demo d1(1 );
//
//     // створюємо екземпляр та ініціалізуємо
//     // персональне поле personal для d2
//     Demo d2( 2 );
//
//     Demo d3( 3 );
//
//     // присвоюємо значення спільному полю common
//     //d1.common = 42;
//
//
//     // перевіряємо значення загального поля в d2
//     std::cout << "d1.common = " << d1.common << " personal = "<<d1.personal<< '\n';
//     std::cout << "d2.common = " << d2.common << " personal = "<<d2.personal<< '\n';
//     std::cout << "d3.common = " << d3.common << " personal = "<<d3.personal<< '\n';
//     // 42 на екрані
//
//
//
//     return 0;
// }