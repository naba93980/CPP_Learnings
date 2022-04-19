#include <iostream>
class A
{
    int x;

public:
    void get_input(int a)
    {
        x = a;
        return;
    }
    int a_display()
    {
        return x;
    }
    friend void exchange(class A &, class B &);
} k;
class B
{
    int y;

public:
    void get_input(int a)
    {
        y = a;
        return;
    }
    int b_display()
    {
        return y;
    }
    friend void exchange(class A &, class B &);
} l;
void exchange(class A &x, class B &y) //here reference variable  is used as formal parameter, so it will exchange the real object's members and wont make any copy of the real objects.
{
    int temp = x.x;
    x.x = y.y;
    y.y = temp;
    return;
}
int main()
{
    k.get_input(50);
    l.get_input(10);
    std::cout << k.a_display() << "\n";
    std::cout << l.b_display() << "\n";
    exchange(k, l);
    std::cout << k.a_display() << "\n";
    std::cout << l.b_display() << "\n";

    std::cout << '\n';
    return 0;
}