#include <iostream>
#include <cmath>
class scientific
{
    int x, y;

public:
    void setval(int a, int b)
    {
        x = a;
        y = b;
    }
    void setval(int a)
    {
        x = a;
    }
    double res(char a)
    {
        if (a == 'p')
            return pow(x, y);
        if (a == 'l')
            return log(x);
        if (a == 't')
            return sqrt(x);
        if (a == 's')
            return sin(x);
        else
        {
            std::cout << "error";
            exit(-1);
        }
    }
};
class simple
{
    int x, y;

public:
    void display(int k)
    {
        std::cout << k << std::endl;
    }
    void setval(int a, int b)
    {
        x = a;
        y = b;
    }
    int res(char a)
    {
        if (a == '+')
            return x + y;
        if (a == '-')
            return x - y;
        if (a == '*')
            return x * y;
        if (a == '/')
            return x / y;
        else
        {
            std::cout << "error";
            exit(-1);
        }
    }
};
class hybrid : public scientific, public simple
{
public:
    void display(char a, int x, int y)
    {
        if (a == '+' || a == '-' || a == '*' || a == '/')
        {

            simple::setval(x, y);
            std::cout << simple::res(a);
        }
        else
        {
            scientific::setval(x, y);
            scientific::res(a);
        }
    }
    void display(char a, int x)
    {
        {

            scientific::setval(x); //Overloading doesnot work for derived class with more than one base class in c++.
            std::cout << scientific::res(a);
        }
    }
};
int main()
{
    int res;
    hybrid obj;
    obj.display('t', 25);
    // obj.display(8); //There is no overload resolution between Base and Derived. In c++ there is no overloading across scopes.
    std::cout << '\n';
    return 0;
}