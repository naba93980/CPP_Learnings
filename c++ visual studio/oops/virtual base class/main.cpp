#include <iostream>
class A
{
public:
    int k;
};
class B : virtual public A
{
public:
    int l;
};
class C : virtual public A
{
public:
    int m;
};
class D : virtual public A
{
public:
    int n;
};
class G : public A //inherits entire standalone copy of object of class A
{
public:
    int n;
};
class E : public C, public B, public D //inherits one common copy of object of class A
{
public:
    int O;
};
class F : public C, public B, public D, public G //inherits two copies of object of class A , one from common base class of B,C,D and other one from class G.
{
public:
    int n;
};
int main()
{
    A obja;
    obja.k = 5;
    std::cout << obja.k << std::endl;

    B objb;
    std::cout << objb.k << std::endl;
    objb.k = 10;
    std::cout << objb.k << std::endl;

    B objbb;
    std::cout << objbb.k << std::endl;
    objbb.k = 100;
    std::cout << objbb.k << std::endl;
    std::cout << objb.k << std::endl;

    C objc;
    std::cout << objc.k << std::endl;
    objc.k = 15;
    std::cout << objc.k << std::endl;

    D objd;
    std::cout << objd.k << std::endl;
    objd.k = 20;
    std::cout << objd.k << std::endl;

    E obje;
    std::cout << obje.k << std::endl;
    obje.k = 25;
    std::cout << obje.k << std::endl;
    obje.B::k = 30;
    std::cout << obje.C::k << std::endl;
    obje.C::k = 35;
    std::cout << obje.D::k << std::endl;
    obje.A::k = 67;
    std::cout << obje.B::k << std::endl;

    // F objf;   //confusion exists as to which copy should be used to access object of base class A, whether copy of object of class A common to class B,C,D or copy of object of class A inherited standalonely by class G.
    // std::cout << objf.k << std::endl;
    // objf.k = 25;
    // std::cout << objf.k << std::endl;

    std::cout << '\n';
    return 0;
}