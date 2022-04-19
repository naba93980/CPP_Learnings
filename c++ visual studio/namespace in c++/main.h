#include <iostream>
namespace one
{
    int a = 50;
    namespace two
    {
        int c = 67;
    }
}
namespace one
{
    int b = 55;
}
namespace def
{
    class A;
    void fun(void);
}
class def::A
{
public:
    void print() { std::cout << "inside class\n"; }
};
void def::fun()
{
    std::cout << "inside function\n";
}
// int main()
// {
//     def::A obj;
//     obj.print();
//     def::fun();
//     std::cout << one::a << one::b << one::two::c;
//     std::cout << '\n';
//     return 0;
// }