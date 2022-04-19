#include <iostream>
class A
{
    int x;
    int y;

public:
    A()
    {
        std::cout << "called\n";
    }
    A(int a, int b) //: x(a), y(b) //treats as default constructor which doesnot set any value to x and y through arguments, so it sets random values to x and y on its own while the passed parameters a and b are useless.
    {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << "called arg cons\n";
        show();
    }
    void show()
    {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }
};

int main()
{
    A obj(50, 70);
    std::cout << '\n';
    return 0;
}