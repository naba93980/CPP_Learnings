#include <iostream>
class base
{
public:
    int x;
    base()
    {
        x = 5;
        std::cout << "base class constructor called\n";
    }
};
class baas
{
public:
    int z;
    baas()
    {
        z = 90;
        std::cout << "virtual baas class constructor called\n";
    }
};
class derived : public base, virtual public baas
{
public:
    int y;
    derived()
    {
        y = 10;
        std::cout << "derived class constructor called\n";
    }
};

int main()
{

    derived obj;
    std::cout << obj.x << "\n"
              << obj.y << "\n"
              << obj.z;
    std::cout << '\n';
    return 0;
}