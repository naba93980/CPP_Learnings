#include <iostream>
class B;
class A
{
public:
    int x;
    static int z;
    A() : x(5) {}
    virtual A &getdata() //virtual solves the problem and now getdata of class B is getting called
    {
        std::cout << "{the val of x = " << x << "\n";
        std::cout << "the val of this for class A = " << this << "}\n";
        return *this;
    }
    /*virtual*/ static void display() //a static function cant be virtual
    {
        std::cout << z << "\n";
    }
};
class B : public A
{
public:
    int y;
    static int k;
    B() : y(10) {}
    B &getdata()
    {
        std::cout << "the val of y = " << y << "\n";
        return *this;
    }
    /*virtual*/ static void display() //a static function cant be virtual
    {
        std::cout << k << "\n";
    }
};
int A::z = 89;
int B::k = 99;
int main()
{
    B obj;
    A obja = B(); //object slicing
    obja.getdata();
    obja.display();
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
