#include <iostream>
template <typename U, typename V = char> // V has default value
class B
{
public:
    U value;
    V value2;
    B(U value, V value2)
    {
        this->value = value;
        this->value2 = value2;
        print();
    }
    void print()
    {
        std::cout << value << " " << value2;
    }
};

template <typename T, typename Z>
class A
{
public:
    A(T b, Z d);
    int a;
    Z d;
    T b;
    template <typename U>
    T sum(U c);
    template <typename U>
    void print(U c)
    {
        std::cout << sum<U>(c) << " " << d;
    }
};
template <typename T, typename Z>
A<T, Z>::A(T b, Z d)
{
    this->b = b;
    this->d = d;
    a = (int)d;
}
template <typename T, typename Z>
template <typename U>
T A<T, Z>::sum(U c)
{
    return a + b + (int)c;
}

int main()
{
    A<int, char> a = A<int, char>(10, 'A');
    a.print<double>(334.0);

    std::cout << '\n';
    B<char, double>('a', 3.0);
    std::cout << '\n';
    B<char, char>('a', 'b');
    std::cout << '\n';
    B<char>('a', 87);
    std::cout << '\n';
    return 0;
}