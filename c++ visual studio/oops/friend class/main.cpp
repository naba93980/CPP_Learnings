#include <iostream>
class B;
class A
{
    int x = 5;
    void print()
    {
        std::cout << "hello world\n";
    }
    friend class B;
};
class B
{
public:
    void accessWOA()
    {
        class A k;
        k.print();
        std::cout << k.x << "\n";
    }
    void accessWA(class A l)
    {
        l.print();
        std::cout << l.x << "\n";
    }
};
int main()
{
    class A l;
    class B m;
    m.accessWA(l);
    m.accessWOA();
    std::cout << '\n';
    return 0;
}