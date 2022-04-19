#include <iostream>
void access(class A);
class B
{
    int y;

public:
    void dede(class A);
};
class A
{
    int a = 5, b = 10;
    void karle()
    {
        std::cout << "namaskar";
    }
    friend void access(class A x);
    friend void B::dede(class A); //needs to know 'type' of B and dede above it.
};

void B::dede(class A x)
{
    std::cout << x.a << "\n";
    x.karle();
    std::cout << "\n";
    class A y;
    std::cout << y.b << "\n";
}

void access(class A x)
{
    std::cout << x.a << "\n";
    x.karle();
    std::cout << "\n";
    class A y;
    std::cout << y.b << "\n";
}
int main()
{
    A X;
    B Y;
    Y.dede(X);
    access(X);
    std::cout << '\n';
    return 0;
}