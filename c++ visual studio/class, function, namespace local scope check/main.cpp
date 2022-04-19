#include <iostream>
//global scope
int x = 55;
class A //class local scope
{
public:
    int x;
};
namespace CLASSB //namespace local scope
{
    class B
    {
    public:
        static int z;
    };
}
class B //class local scope
{
public:
    int z;
};
namespace hello
{
    int x = 5;
}
int CLASSB::B ::z = 10;
struct car //struct local scope
{
private:
    int a;
    void wheel(int a)
    {
        car::a = a;
    }
} honda;
int main() //function local scope
{
    class A k;
    k.x = 5;
    class B j;
    j.z = 10;
    int x = 10;
    std::cout << x;
    std::cout << ::x;
    std::cout << hello::x;
    return 0;
}
