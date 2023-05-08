#include <iostream>
using namespace std;

class Trapezoid
{
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid()
    {
        base1 = 0;
        base2 = 0;
        height = 0;
    }

    Trapezoid (double b1, double b2, double h)
    {
        base1 = b1;
        base2 = b2;
        height = h;
    }

    double getBase1()
    {
        return base1;
    }

    void setBase1(double b1)
    {
        base1 = b1;
    }

    double getBase2()
    {
        return base2;
    }

    void setBase2(double b2)
    {
        base2 = b2;
    }

    double getHeight()
    {
        return height;
    }

    void setHeight(double h)
    {
        height = h;
    }

    double getArea()
    {
        return ((base1 + base2) * height) / 2.0;
    }

    void print_sqrt()
    {
        cout << "Base 1: " << base1 << endl;
        cout << "Base 2: " << base2 << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main()
{
    Trapezoid trap (3, 6, 4); // Створення обʼєкту класуТрапеції
    trap.setBase1(5); // Змінення значення Основи 1
    trap.print_sqrt(); // Виведення оновленої інформації про трапецію
    return 0;
}
