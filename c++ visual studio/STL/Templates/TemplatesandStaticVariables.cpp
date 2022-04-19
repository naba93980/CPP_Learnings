#include <iostream>
template <typename T>
class A
{
    T x;
    static int count;

public:
    A()
    {
        count++;
    }
    void print()
    {
        std::cout << count;
    }
};
template <typename T>
int A<T>::count = 0;
int main()
{
    A<int> a;
    a.print();
    A<int> b;
    b.print();
    A<float> c;
    c.print();

    std::cout << '\n';
    return 0;
}