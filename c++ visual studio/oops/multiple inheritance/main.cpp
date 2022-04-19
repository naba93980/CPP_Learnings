#include <iostream>
class base1
{
protected:
    int x;

public:
    base1()
    {
        std::cout << "base1 called\n";
    }
    void setval(int k)
    {
        x = k;
    }
};
class base2
{
protected:
    int y;

public:
    base2()
    {
        std::cout << "base2 called\n";
    }
    void setval(int l)
    {
        y = l;
    }
};
class derived : public base1, public base2
{
    //protected: int x, y;
public:
    derived()
    {
        std::cout << "derived called\n";
    }
    void display()
    {
        std::cout << "The value of x " << x << std::endl;
        std::cout << "The value of y " << y << std::endl;
        std::cout << "The value of avg " << (x + y) / 2;
    }
    //base1::setval(int) , base2::setval(int)
};

int main()
{
    derived a;
    a.base1::setval(5);
    a.base2::setval(10);
    a.display();
    std::cout << '\n';
    return 0;
}