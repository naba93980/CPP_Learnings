#include <iostream>
class base
{
public:
    int x;
    base()
    {
        x = 33;
        std::cout << "base class constructor called " << x << "\n";
    }
};
class baas
{
public:
    int z;
    baas()
    {
        z = 78;
        std::cout << "virtual baas class constructor called " << z << "\n";
    }
};
class derived : public base, virtual public baas
{
public:
    int y;
    derived(int der)
    {
        std::cout << "derived class constructor called " << y << "\n";
        y = der;
        std::cout << "derived class constructor called " << y << "\n";
    }
};
int main()
{

    derived obj(500);
    std::cout << obj.x << "\n"
              << obj.y << "\n"
              << obj.z;
    std::cout << '\n';
    return 0;
}