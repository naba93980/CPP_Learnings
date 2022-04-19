#include <iostream>
void fibonacci(int n)
{
    if (n == 0)
    {
        std::cout << "Invalid input";
        exit(1);
    }
    if (n == 1)
    {
        std::cout << 0;
        return;
    }
    if (n == 2)
    {
        std::cout << 0 << "\t" << 1;
        return;
    }
    else
    {
        static int count = 2;
        if (count == n)
            return;
        static int a = 0, b = 1;
        if (a == 0 && b == 1)
        {
            std::cout << a << "\t" << b << "\t";
        }
        int c = a + b;
        std::cout << c << "\t";
        a = b;
        b = c;
        count++;
        fibonacci(n);
        return;
    }
}
int main()
{
    int n;
    std::cout << "Enter n:\n";
    std::cin >> n;
    fibonacci(n);
    std::cout << '\n';
    return 0;
}