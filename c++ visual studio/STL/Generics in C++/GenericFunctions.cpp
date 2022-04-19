#include <iostream>

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{

    std::cout << max<char>('g', 'a');
    std::cout << '\n';
    return 0;
}