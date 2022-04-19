#include <iostream>
class G
{
public:
    int x;
    G()
    {
        std::cout << "G called\n";
    }
};
class F
{
public:
    int x;
    F()
    {
        std::cout << "F called\n";
    }
};
class D
{
public:
    int x;
    D()
    {
        std::cout << "D called\n";
    }
};
class A
{
public:
    int x;
    A()
    {
        std::cout << "A called\n";
    }
};
class B : public A
{
public:
    int y;
    B()
    {
        std::cout << "B called\n";
    }
};
class E : public F
{
public:
    int y;
    E()
    {
        std::cout << "E called\n";
    }
};
class C : public D, virtual public B, public E, virtual public G //B cons called as it is virtual class, but B is dependent on A so ultimately A cons called first, then B then G as it is declared virtual public after B in this line declaration then out of D and E, D is declared first so cons of D is called, then E is called but E is dependent on F so cons of F is called then cons of E and the end cons of C is called ......inheritance path - A->B->G->D->F->E->C
{
public:
    int z;
    C()
    {
        std::cout << "C called\n";
    }
};

int main()
{
    C objc;
    std::cout << '\n';
    return 0;
}