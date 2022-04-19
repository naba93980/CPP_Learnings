#include <iostream>
class A
{
    int x, y;

public:
    // A(void)
    // {
    //     x = 11;
    //     y = 12;
    // }
    // A(int a) //constructor overloading.
    // {
    //     x = a;
    //     y = 10;
    // }
    A(int a = 20, int b = 10) //default argument
    {
        x = a;
        y = b;
    }
    void display()
    {
        std::cout << x << "\n"
                  << y << std::endl;
    }
};

int main()
{
    A c = A();
    c.display();
    A a = A(5);
    a.display();
    A b(5, 6);
    b.display();
    return 0;
}