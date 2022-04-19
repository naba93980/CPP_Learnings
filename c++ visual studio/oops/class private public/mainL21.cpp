#include <iostream>
class A
{
private:
    int a, b, c;

public:
    void pass_int(int, int, int);
    void print_int() //only memebr funcions can access the private memebers of the classs.
    {
        std::cout << "The value of a = " << a << std::endl;
        std::cout << "The value of b = " << b << std::endl;
        std::cout << "The value of c = " << c << std::endl;
    }
};
void A::pass_int(int k, int l, int m)
{
    a = k;
    b = l;
    c = m;
    return;
}

int main()
{
    class A naba, jyoti;
    naba.pass_int(10, 20, 30);
    naba.print_int();
    jyoti.pass_int(40, 50, 60);
    jyoti.print_int();

    std::cout << '\n';
    return 0;
}