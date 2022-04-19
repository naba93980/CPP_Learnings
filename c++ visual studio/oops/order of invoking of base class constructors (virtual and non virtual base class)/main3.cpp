#include <iostream>
class A
{
public:
    int x;
    A()
    {
        std::cout << "A called\n";
    }
};
class B : public A
{
public:
    int y;
    B()
    {
        std::cout << "B called\n";
    }
};
class C : virtual public B, public A //B cons called as it is virtual and also 1st base class, but B is dependent on A so ultimately A cons called first, then B , then A then C
{
public:
    int z;
    C()
    {
        std::cout << "C called\n";
    }
};

int main()
{
    C objc;
    std::cout << '\n';
    return 0;
}