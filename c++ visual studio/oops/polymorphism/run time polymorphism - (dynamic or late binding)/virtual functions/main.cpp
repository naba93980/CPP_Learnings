#include <iostream>
class B;
class A
{
public:
    int x;
    A() : x(5) {}
    A &getdata() //Now, this happens because of how C++ was written, in this case early binding happens, and the default function is set by the compiler at the compile time itself. This is also popularly known as static call effective static resolution.
    {
        std::cout << "{the val of x = " << x << "\n";
        std::cout << "the val of this for class A = " << this << "}\n";
        return *this;
    }
};
class B : public A
{
public:
    int y;
    B() : y(10) {}
    B &getdata()
    {
        std::cout << "the val of y = " << y << "\n";
        return *this;
    }
};

int main()
{
    B obj;
    A obja = B(); //object slicing
    obja.getdata();
    std::cout << &obja << "\n";

    A *p = &obj; //here also object slicing...since p is pointer to A, it cant access members of derived class B....once assigned to A *p, obj literally means object of only class A for that pointer. 'this' pointer which is implicitly passed literally means pointer to object of class A.
    std::cout << "1. The value of p = " << p << "\n";
    std::cout << "2. The value of address of obj = " << &obj << "\n";
    std::cout << "3. The value of p = " << &(p->getdata()) << "\n";
    p->getdata().getdata();
    obj.getdata();
    std::cout << '\n';
    return 0;
}
