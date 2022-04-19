#include <iostream>
class A
{
public:
    A()
    {
        std::cout << "called";
    }
};

int main()
{
    A obj;

    std::cout << '\n';
    return 0;
}