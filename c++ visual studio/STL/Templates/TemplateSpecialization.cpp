#include <iostream>
template <typename T>
class A
{
public:
    A() { std::cout << "templated argument\n"; }
};
template <>
class A<int>
{
public:
    A() { std::cout << "specialized argument\n"; }
};
template <typename Y>
void print()
{
    std::cout << "templated " << sizeof(Y) << "\n";
}
template <>
void print<char>()
{
    std::cout << "templated " << sizeof(char) << "\n";
}
int main()
{
    A<char> a;
    A<int> b;
    A<float> c;
    print<int>();
    print<char>(); // compiler first checks if a function of same matching data type is found, if not then goes to the main template
    print<double>();
    std::cout << '\n';
    return 0;
}