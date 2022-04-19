#include <iostream>
class base
{
public:
    int x;
    base(int val)
    {
        x = val;
        std::cout << "base class constructor called " << x << "\n";
    }
};
class baas
{
public:
    int z;
    baas(int val)
    {
        z = val;
        std::cout << "virtual baas class constructor called " << z << "\n";
    }
};
class derived : public base, virtual public baas
{
public:
    int y;
    derived(int baseval, int virtualval) : base(baseval), baas(virtualval)
    {
        std::cout << "derived class constructor called " << y << "\n";
        y = 46;
        std::cout << "derived class constructor called " << y << "\n";
    }
};
int main()
{

    derived obj(500,1000);
    std::cout << obj.x << "\n"
              << obj.y << "\n"
              << obj.z;
    std::cout << '\n';
    return 0;
}