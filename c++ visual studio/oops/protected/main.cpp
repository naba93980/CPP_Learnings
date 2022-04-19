#include <iostream>
class A
{
protected:
    int x;

public:
    A()
    {
        x = 10;
    }
};
class B : public A
{
protected:
    int y;

public:
    B()
    {
        y = x;
    }
    void display()
    {
        std::cout << "y = " << y << std::endl;
    }
};
int main()
{
    B objb;
    objb.display();
    std::cout << '\n';
    return 0;
}