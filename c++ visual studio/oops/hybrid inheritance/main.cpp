#include <iostream>
class A
{
public:
    A() { std::cout << "A called\n"; }
    int k;
};
class B : virtual public A //inherits entire new object of class A. //virtual makes sure there is only one copy of object of class A for more than one derived class for one ultimate object of final derived class
{
public:
    B() { std::cout << "B called\n"; }
    int k;
    int l;
};
class C : virtual public A //inherits entire new object of class A.
{
public:
    C() { std::cout << "C called\n"; }
    int m;
};
class D : public C, public B
{
public:
    D()
    {
        std::cout << "D called\n";
    }
};
int main()
{
    D objd;
}