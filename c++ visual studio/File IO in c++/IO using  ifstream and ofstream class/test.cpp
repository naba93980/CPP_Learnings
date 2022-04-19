#include <iostream>
class A
{
public:
    int x;
    A(int j)
    {
        x = j;
    }
    void setdata(int y)
    {
        x = y;
    }
};

int main()
{

    A obj(23);
    std::cout << obj.x;
    obj.setdata(5);
    std::cout << obj.x;
    obj.setdata(50);
    std::cout << obj.x;
    std::cout << '\n';
    return 0;
}