#include <iostream>
class A
{
public:
    static int x; //only one copy of class variable x present in code segment gets derived everywhere.
};
class B : public A
{
};
class C : public A
{
};
class D : public B, public C //static variable x in class A has single copy as it is a common class variable, so no ambiguity.
{
};
int A::x = 99;
int main()
{
    B objb;
    C objc;
    D objd;
    objb.x = 788;
    A::x = 999;
    std::cout << "khikhikhi" << B::x << "\n";
    std::cout << objb.x << std::endl;
    std::cout << objc.x << std::endl;
    std::cout << objd.x << std::endl;
    std::cout << &objb << std::endl;
    std::cout << &objc << std::endl;
    std::cout << &objd << std::endl;
    std::cout << '\n';
    return 0;
}