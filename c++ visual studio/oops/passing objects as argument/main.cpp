#include <iostream>
class complex
{
    int a, b;

public:
    void set_data(int, int);
    void add_data(complex first, complex second)
    {
        a = first.a + second.a;
        b = first.b + second.b;
    }
    void display()
    {
        std::cout << "The complex number is : " << a << " + " << b << "i" << std::endl;
    }
};
void complex::set_data(int a, int b)
{
    complex::a = a;
    complex::b = b;
}

int main()
{
    complex first, second, third;
    first.set_data(1, 2);
    first.display();
    second.set_data(3, 4);
    second.display();
    third.add_data(first, second);
    third.display();

    std::cout << '\n';
    return 0;
}