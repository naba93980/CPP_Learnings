#include <iostream>

int vol(int l, int b, int h)
{
    return l * b * h;
}
int vol(float a)
{
    return a * a * a;
}
void print(char a[])
{
    std::cout << a << "\n";
}
void print(char a[], char b[])
{
    std::cout << a << " " << b << "\n";
}
void print(char a[], int b)
{
    std::cout << a << " " << b << "\n";
}
int main()
{
    //compiler checks which call fits which function prototype & then calls the correct one.
    char a[6] = "hello";
    char b[5] = "what";
    print(a);
    print(a, b);
    print(a, 5);
    std::cout << "the vol of rectangle " << vol(3, 4, 5) << "\n";
    std::cout << "the vol of cube " << vol(7);
    std::cout << '\n';
    return 0;
}
