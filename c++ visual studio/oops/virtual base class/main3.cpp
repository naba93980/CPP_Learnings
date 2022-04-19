#include <iostream>
class A
{
public:
    int k;
};
class B : virtual public A //inherits entire new common object of class A. //virtual makes sure there is only one copy of object of class A for more than one or more derived class for one ultimate object of final derived class
{
public:
    int l;
};
class C : public B, virtual public A //inherits entire new object of class B and common object of class A.
{
public:
    int m;
};
int main()
{
    C objc;
    objc.B::k = 10; //common copy of A
    objc.k = 109;   //common copy of A
    std::cout << objc.B::k << std::endl;
}