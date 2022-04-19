#include <iostream>
namespace one
{
    class A
    {
    public:
        int x;
        A() : x(10) {}
    };
}
namespace two //declarative region
{
    one::A objA; //memory allocated, constrcution has initialized x.
}
namespace three //declarative region
{
    one::A objA; //memory allocated, constrcution has initialized x.
}
namespace summ
{
    int sum = two::objA.x + three::objA.x; //sum=20 calculated from values initialized by constructor.
}
int main()
{
    two::objA.x = 5;    //new value assigned.
    three::objA.x = 10; //new value assigned.
    std::cout << two::objA.x << std::endl;
    std::cout << three::objA.x << std::endl;
    std::cout << summ::sum << std::endl;
    std::cout << '\n';
    return 0;
}